#include"account.c"

int main(void){
    Account a;
    int index=0;
    int count=0;
    int menu;
    while(1){
        menu=selectMenu();
        if(menu==0){
        break;
        }else if(menu==1){
                count+=addAccount(&a,count);
        }else if (menu==2){
                deleteAccount(&a,count);
        }else if (menu==3){

        }else if (menu==4){
		readAccount(&a,count);
	}
    }
    printf("종료됨!\n");
    return 0;
}
