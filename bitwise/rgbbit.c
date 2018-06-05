#include<stdio.h>

int main(){
    int red,green,blue,data;
    printf("red     :");    scanf("%d",&red);
    printf("green   :");    scanf("%d",&green);
    printf("blue    :");    scanf("%d",&blue);

    // 256 2^8 

    data=data|red; data<<=8;
    data=data|green; data<<=8;
    data=data|blue;

    printf("data=%d\n",data);

    red=255; green=255; blue=255;

    green=data&green; data>>=8;
    blue=data&blue;   data>>=8;
    red=data&red;

    printf("*************");
    printf("\n%d %d %d", red, green, blue);
}