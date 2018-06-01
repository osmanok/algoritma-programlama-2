#include<stdio.h>
#include<conio.h>

int sonuc;
int divisionwithsubtraction(int x, int y);

int main(){
    int sayi1,sayi2;
    here:
    printf("sayi: "); scanf("%d",&sayi1);
    printf("sayi: "); scanf("%d",&sayi2);

    if(sayi1<0 || sayi2==0 || sayi1<sayi2){
        while(sayi1>0 || sayi2!=0 || sayi1>sayi2){
            printf("dogru degerler giriniz \n");
            goto here;
        }
    }

    printf("sonuc: %d",divisionwithsubtraction(sayi1,sayi2));

    getch();

}

int divisionwithsubtraction(int x, int y){
    if(x-y==0){
        return 1;
    }
    else{
        return 1+divisionwithsubtraction(x-y,y);
    }
}