#include<stdio.h>
#include<conio.h>
#include<string.h>

int polingdrom(char *str, int len);

int main(){
    char str[20],karar;
    int sonuc;
    do{
        printf("metni giriniz: ");  gets(str);
        sonuc=polingdrom(str, strlen(str));
        if(sonuc) printf("polingdromdur");
        else printf("polingdrom degildir");
        printf("\nDevam etmek icin E Cikmak icin H");
        karar=getch();
        if(karar=='H' || karar=='h') break;
    }while(1);
}

int polingdrom(char *str, int len){
    if(len<2)   return 1;
    else return (str[0]==str[len-1]) && polingdrom(&str[1],len-2);
}