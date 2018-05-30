#include<stdio.h>
#include<conio.h>

int power(int x, int y);

int main(){
    int sayi,us;
    printf("sayiyi giriniz: "); scanf("%d",&sayi);
    printf("ussu   giriniz: "); scanf("%d",&us);

    printf("sonuc: %d",power(sayi,us));

    getch();

}

int power(int x, int y){
    if(y==0){
        return 1;
    }
    else{
        return x*power(x,y-1);
    }
}