#include"account.h"
#include <string.h>

int selectMenu(){
	int menu;
	printf("\n 가계부 가계부 가계부! \n\n");
	printf("1. 가계부 쓰기\n");
	printf("2. 가계부 지우기\n");
	printf("3. 가계부 수정\n");
	printf("4. 가계부 읽기\n");
	printf("원하는 메뉴를 입력하세요. =>");
	scanf("%d",&menu);
	return menu;
}

int addAccount(Account *a,int count){
	FILE *fp;
	int check;
	char reason[100];
	char dummy[10];
	printf("몇년도 가계부인가요?\n");
	scanf("%d",&a->year);
	printf("몇월달 가계부인가요?\n");
	scanf("%d",&a->month);
	printf("날짜는? ");
	scanf("%d",&a->date);
	fgets(dummy,10,stdin);
	printf("내역은? ");
	fgets(reason,100,stdin);
	for(int i=0;i<100;i++){
		if(reason[i]=='\n'){
				reason[i]='\0';
			}
		break;
	}
	strcpy(a->reason,reason);
	printf("수입은? ");
	scanf("%d",&a->income);
	printf("지출은? ");
	scanf("%d",&a->outcome);
	printf("완료했습니다.\n");
	return 1;
}

int deleteAccount(Account *a,int count){
	int check;
    	int doubleCheck;
    	readAccount(a,count);//일단 목록을 불러와요
    	printf("\n");
    	printf("날짜는(취소 :0)? ");
    	scanf("%d",&check);
    	if(check==0){
        	return 0;
    	}else{
        	printf("정말로 삭제합니까? (삭제:1) ");
        	scanf("%d",&doubleCheck);
        	if(doubleCheck==1){
			if(a->date==check){
				a->date=-1;
			}
            	printf("=> 삭제됨! \n");
            	return 1;
        	}else{
            		printf("취소하셨습니다.\n");
            	return 0;
        	}
    	}
}

void readAccount(Account a){
    printf("\n******************\n");
    printf("%d",a[i].year);
    printf(" %d",a[i].month);
    printf(" %d",a[i].date);
    printf(" %d",a[i].income);
    printf(" %d",a[i].outcome);
    printf(" %s\n",a[i].reason);
    printf("\n");
}

void listAccount(Account *a, int count){
	for(int i = 0; i < count; i++){
		if(a[i].date == -1){
			continue;
		}
		printf("%2d ", i+1);
		readAccount(a[i]);
	}
}

int updateAccount(Account *a){
	
}
