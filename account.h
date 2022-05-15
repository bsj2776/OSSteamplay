
typedef struct{
	int year;//년도를 받음
	int month;//달을 받음
	int date;//날짜를 받음
	int income;//들어온 금액
	int outcome;//나간금액
	char reason[100];//이유 등을 표기함
}Account;

int addAccount(Account *a,int count);//리턴값은 갯수임
int deleteAccount(Account *a,int count);//리턴값은 갯수임
void readAccount(Account *a, int count);
void listAccount(Account *a, int count);
int updateAccount(Account *a, int count);
void printAccount(Account a); //검색기능 출력문


//파일쓰기(SaveFile)
void saveData(Account *a, int count);
//파일읽기(LoadFile)
int loadData(Account *a);
//입력한 날짜 검색
void searchDate(Account *a, int count);
//가장높은 지출내역 검색
void searchPayment(Account *a, int count);
//어떤 기능을 선택할지 받음.
int selectMenu();
//현재 수익내역과 총 지출액 검색
void searchTotalPay(Account *a, int count);



//원하는 달 모두 삭제 - 삭제한 data 개수 return
int deleteMonth(Account *a, int count);


