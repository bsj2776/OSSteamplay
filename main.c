#include "account.h"

int main(void){
	Account a;
	int index;
	int count;
	while(1){
		menu=selectMenu();
		if(menu==1){
			addAccount(a,count);
		}else if(menu==2){
			deleteAccount(a,count);
		}else if(menu==0){
			printf("장비를 정지합니다");
			break;
		}
	}
}