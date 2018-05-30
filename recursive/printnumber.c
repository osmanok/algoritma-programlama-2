#include<stdio.h>
#include<conio.h>

int print(int x);

int main(){
    int sayi,debugger;
    printf("sayiyi giriniz: "); scanf("%d",&sayi);

    debugger=print(sayi);

    printf("\n*** %d ***\n",debugger);
    getch();

}

int print(int x){
    if(x==-1){
        return -1;
    }
    printf("%d\t",x);
    return print(x-1);
}