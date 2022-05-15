#include "account.c"

int main(void){
	Account a[100];
	int index;
	int count=0;
  	int menu;

	count = loadData(a);
	index = count;
	while(1){
		menu=selectMenu();
		if(menu==1){
			count += addAccount(a,count);//가계부 생성
		}else if(menu==2){
			deleteAccount(a,count);//가계부 삭제
			count--;
		}else if(menu==3){
			updateAccount(a,count);//수정
		}else if(menu==4){
			readAccount(a,count);//읽어오기
		}else if(menu==5){
			saveData(a, count);
		}else if(menu==6){
			//int total;
			//total = deleteMonth(a, count);
			//count = count - total;
		}else if(menu==7){
			//searchDate(a, count);
		}else if(menu==8){
			//searchPayment(a, count);
		}else if(menu==9){
			//searchTotalPay(a, count);
		}
		else if(menu==0){
			printf("장비를 정지합니다");
			break;
		}
	}
}
