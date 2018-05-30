#include<stdio.h>
#include<conio.h>

int fact(int x);

int main(){
    int sayi;
    printf("sayiyi giriniz"); scanf("%d",&sayi);

    printf("Sonuc:%d\n",fact(sayi));

    getch();

    for(int i=0; i<sayi; i++){
        printf("%d\t",fact(i));
    }

    getch();

}

int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}