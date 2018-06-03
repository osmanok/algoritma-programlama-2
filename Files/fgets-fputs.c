#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char str[20];
    FILE *fp;
    int i,x;

    fp=fopen("deneme.txt","w");
    srand (time(NULL));
    x=5+rand()%20;
    for(i=0; i<x; i++){
        str[i]=65+rand()%90;
    }
    fputs(str, fp);
    fclose(fp);

    fp=fopen("deneme.txt","r");
    fgets(str, x, fp);
    printf("%s",str);
    fclose(fp);

    getch();

}

