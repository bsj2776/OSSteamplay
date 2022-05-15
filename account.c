#include"account.h"
#include <string.h>

int selectMenu(){
	int menu;
	printf("\n 가계부 가계부 가계부! \n\n");
	printf("1. 가계부 쓰기\n");
	printf("2. 가계부 삭제(날짜)\n");
	printf("3. 가계부 수정\n");
	printf("4. 가계부 읽기\n");
	printf("5. 가계부 저장\n");
	printf("6. 가계부 삭제(달)\n");
	printf("7. 가계부 날짜 검색\n");
	printf("8. 가계부 최대 지출 검색\n");
	printf("9. 수익내역과 총 지출액 검색\n");
	printf("0. 정지하기\n");
	printf("원하는 메뉴를 입력하세요. =>");
	scanf("%d",&menu);
	return menu;
}

int addAccount(Account *a,int count){
	FILE *fp;
	int check;
	char reason[100];
	char dummy[10];
	printf("몇년도 가계부인가요? ");
	scanf("%d",&a[count].year);
	printf("몇월달 가계부인가요? ");
	scanf("%d",&a[count].month);
	printf("날짜는? ");
	scanf("%d",&a[count].date);
	fgets(dummy,10,stdin);
	printf("내역은? ");
	fgets(reason,100,stdin);
	for(int i=0;i<100;i++){
		if(reason[i]=='\n'){
				reason[i]='\0';
			}
		break;
	}
	strcpy(a[count].reason,reason);
	printf("수입은? ");
	scanf("%d",&a[count].income);
	printf("지출은? ");
	scanf("%d",&a[count].outcome);
	printf("완료했습니다.\n");
	return 1;
}

int deleteAccount(Account *a,int count){
	int check=0;
	int month, date;
    int doubleCheck;
    readAccount(a,count);//일단 목록을 불러와요
    printf("\n");
    printf("몇월인가요(취소 :0)? ");
    scanf("%d",&month);
	printf("몇일인가요(취소 :0)? ");
	scanf("%d",&date);
    if(month==0||date==0){
		printf("취소하셨습니다. \n");
		return 0;
    }else{
    	printf("정말로 삭제합니까? (삭제:1) ");
    	scanf("%d",&doubleCheck);
    	if(doubleCheck==1){
			for(int i=0;i<count;i++){
				if(a[i].date==date&&a[i].month==month){
					a[i].date=-1;
					printf("=> 삭제됨! \n");
					check=1;
					break;
				}else{
					printf("찾는중입니다. \n");
				}
			}
			if(check==0){
				printf("해당 내역을 찾지 못했습니다. \n");
			}
			return 0;
			}else{
				printf("취소하셨습니다.\n");
            	return 0;
        	}
    	}
}

void readAccount(Account *a,int count){
    printf("\n******************\n");
    for(int i=0;i<count;i++){
        if(a[i].date==-1){
            continue;
        }else{
            printf("%2d ",i+1);
            printf("%d",a[i].year);
            printf(" %d",a[i].month);
            printf(" %d",a[i].date);
            printf(" %d",a[i].income);
            printf(" %d ",a[i].outcome);
            printf(" %s",a[i].reason);
        }
    }
    printf("\n");
}

int updateAccount(Account *a,int count){
	int check=0;
	int month, date;
    int doubleCheck;
	char reason[100];
	char dummy[10];
    readAccount(a,count);//일단 목록을 불러와요
    printf("\n");
    printf("몇월인가요(취소 :0)? ");
    scanf("%d",&month);
	printf("몇일인가요(취소 :0)? ");
	scanf("%d",&date);
    if(month==0||date==0){
		printf("취소하셨습니다.\n");
        return 0;
    }else{
		for(int i;i<count;i++){
			if(a[i].date==date&&a[i].month==month){
				printf("년도를 입력하세요. ");
				scanf("%d", &a[i].year);
				printf("월을 입력하세요. ");
				scanf("%d", &a[i].month);
				printf("일을 입력하세요. ");
				scanf("%d", &a[i].date);
				printf("수입을 입력하세요. ");
				scanf("%d", &a[i].income);
				printf("지출을 입력하세요. ");
				scanf("%d", &a[i].outcome);
				fgets(dummy,10,stdin);
				printf("내역을 입력하세요 ");
				fgets(reason,100,stdin);
				for(int i=0;i<100;i++){
					if(reason[i]=='\n'){
						reason[i]='\0';
						}
						break;
				}
				strcpy(a[i].reason,reason);
				printf("수정완료!\n");
				check=1;
				break;
			}
		}
		if(check==1){
			return 0;
		}else{
			printf("입력된 것이 없었습니다. \n");
			return 0;
		}
    }
}
