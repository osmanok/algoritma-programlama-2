#include<stdio.h>
#include<conio.h>

int fibo(int x);

int main(){
    int sayi;
    printf("sayiyi giriniz:"); scanf("%d",&sayi);

    printf("Sonuc:%d\n",fibo(sayi));

    getch();

    for(int i=0; i<sayi; i++){
        printf("%d\t",fibo(i));
    }

    getch();

}

int fibo(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
        return fibo(x-1)+fibo(x-2);
    }
}