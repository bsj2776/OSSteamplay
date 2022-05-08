#include "account.h"
#include <stdio.h>
#include <string.h>

int main(void){
	Account a;
	int index;
	int count;
	while(1){
		menu=selectMenu();
		if(menu==1){
			count += addAccount(&a,count);
		}else if(menu==2){
			deleteAccount(&a,count);
		}else if(menu==3){
			updateAccount(&a);
		}else if(menu==4){
			readAccount(&a);
		}
		else if(menu==0){
			printf("장비를 정지합니다");
			break;
		}
	}
}
