#include<stdio.h>
#include<conio.h>

int toplam;
int carpma(int x, int y);

int main(){
    int sayi1,sayi2;
    printf("sayi1 && sayi2 giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);

    printf("sonuc: %d",carpma(sayi1,sayi2));

    getch();

}

int carpma(int x, int y){
    if(y==0 || x==0){
        return 0;
    }
    if(y==1){
        toplam=x;
        return toplam;
    }
    else{
        toplam=x+carpma(x,y-1);
        return toplam;
    }
}