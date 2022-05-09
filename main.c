#include "account.c"

int main(void){
	Account a[100];
	int index;
	int count=0;
  int menu;
	while(1){
		menu=selectMenu();
		if(menu==1){
			count += addAccount(a,count);//가계부 생성
		}else if(menu==2){
			deleteAccount(a,count);//가계부 삭제
		}else if(menu==3){
			updateAccount(a,count);//수정
		}else if(menu==4){
			readAccount(a,count);//읽어오기
		}
		else if(menu==0){
			printf("장비를 정지합니다");
			break;
		}
	}
}
