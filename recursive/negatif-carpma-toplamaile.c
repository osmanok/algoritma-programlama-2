#include<stdio.h>
#include<conio.h>

int toplam;
int ncti(int x, int y);

int main(){
    int sayi1,sayi2;
    printf("sayi1,sayi2'yi giriniz");
    scanf("%d%d",&sayi1,&sayi2);
    if(sayi1>0 || sayi2>0){
        while(sayi1>0 || sayi2>0){
            printf("Lutfen dogru sayi giriniz:");
            scanf("%d%d",&sayi1,&sayi2);
        }
    }

    printf("sonuc: %d",ncti(sayi1,sayi2));

    getch();
}

int ncti(int x, int y){
    if(y==-1){
        toplam=(-1)*x;
        return toplam;
    }
    else{
        toplam=((-1)*x)+ncti(x,y+1);
        return toplam;
    }
}