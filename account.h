#include<stdio.h>

typedef struct{
	int year;//년도를 받음
	int month;//달을 받음
	int date;//날짜를 받음
	int income;//들어온 금액
	int outcome;//나간금액
	char reason[100]//이유 등을 표기함
}Account;

int addAccount(Account *a,int count);//리턴값은 갯수임
int deleteAccount(Account *a,int count);//리턴값은 갯수임
void readAccount(Account a);
void listAccount(Account *a, int count);
int updateAccount(Account *a);

int selectMenu();//어떤 기능을 선택할지 받음.
