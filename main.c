#include "account.h"

int main(void){
	Account p;
	int index;
	int count;
	while(1){
		menu=selectMenu();
		if(menu==1){
			addAccount(p,count);
		}else if(menu==2){
			deleteAccount(p,count);
		}else if(menu==0){
			printf("장비를 정지합니다");
			break;
		}
	}
}
