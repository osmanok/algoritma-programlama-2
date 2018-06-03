#include<stdio.h>
#include<conio.h>

int main(){
    int number,flag;
    char name[20],surname[20];
    FILE *fp;
    fp=fopen("deneme.txt","w");

    while(1){
        printf("numara  : "); scanf("%d",&number);
        printf("isim    : "); scanf("%s",name);
        printf("soyisim : "); scanf("%s",surname);
        fprintf(fp,"%d %s %s\n", number, name, surname);
        printf("cikmak icin 1"); scanf("%d",&flag);
        if(flag==1) break;
    }

    fclose(fp);

    fp=fopen("deneme.txt","r");

    while(!feof(fp)){
        fscanf(fp, "%d %s %s\n", &number, name, surname);
        printf("%d %s %s\n", number, name, surname);
    }

    getch();

}