#include<stdio.h>
#include<conio.h>

int toplam;
int toplamfonk(int x);

int main(){
    int sayi;
    printf("sayiyi giriniz: "); scanf("%d",&sayi);

    printf("sonuc: %d",toplamfonk(sayi));

    getch();

}

int toplamfonk(int x){
    if(x==1){
        return toplam+x;
    }
    else{
        toplam=x+toplamfonk(x-1);
        return toplam;
    }
}