#include"account.h"

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

}

int deleteAccount(Account *a,int count){

}

void readAccount(Account a){

}

void listAccount(Account *a, int count){

}

int updateAccount(Account *a){

}
