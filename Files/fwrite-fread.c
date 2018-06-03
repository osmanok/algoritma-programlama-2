#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int number;
char karar;
char name[20];
char surname[20];

struct Human{
    int number;
    char name[20];
    char surname[20];
}Human;

int main(){
    FILE *fp;
    fp=fopen("deneme.txt","w");
    struct Human human1;

    while(1){
        printf("Number  : ");   scanf("%d", &number);
        printf("Name    : ");   scanf("%s", name);
        printf("Surname : ");   scanf("%s", surname);

        human1.number=number;
        strcpy(human1.name,name);
        strcpy(human1.surname,surname);

        fwrite(&human1, sizeof(struct Human), 1, fp);

        karar=getch();
        if(karar=='H') break;
    }

    fclose(fp);
    
    fp=fopen("deneme.txt","r");

    do{
        fread(&human1, sizeof(struct Human), 1, fp);

        printf("Number  : %d\t", human1.number);
        printf("Name    : %s\t", human1.name);
        printf("Surname : %s\n", human1.surname);
    }while(!feof(fp));

    fclose(fp);

    getch();

}