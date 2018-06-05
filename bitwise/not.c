#include<stdio.h>
#include<conio.h>

int main(){
    unsigned short x=0x1AC3;
    unsigned short y;

    y=~x;

    printf("%x\n",x);
    printf("%x",y);

    getch();
}