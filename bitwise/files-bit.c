#include<stdio.h>
#include<conio.h>
#include<string.h>

struct kisi{
    char name[20];
    char surname[20];
    int data;
};

int package(int yil, int ay, int gun);
void acma(int data);

int main(){
    FILE *fp;
    while(1){
        int secim;
        printf("ekleme--->1 printall--->2 cikis--->3");
        printf("secim: "); scanf("%d",&secim);
        
        if(secim==1){
            struct kisi human;
            int yil,ay,gun;
            fp=fopen("deneme.txt","a+");
            puts("isim: "); scanf("%s",&human.name);
            puts("soyisim: "); scanf("%s",&human.surname);
            puts("yil: "); scanf("%d",&yil); yil=yil-1900;
            puts("ay: "); scanf("%d",&ay);
            puts("gun: "); scanf("%d",&gun);


            human.data=package(yil, ay, gun);

            fwrite(&human, sizeof(struct kisi), 1, fp);
            
            fclose(fp);
        }

        if(secim==2){
            fp=fopen("deneme.txt","r");
            while(!feof(fp)){
                struct kisi human;
                fread(&human, sizeof(struct kisi), 1, fp);
                puts(human.name); puts(human.surname);
                acma(human.data);
            }
            fclose(fp);
        }
        if(secim==3) break;
    }
}

int package(int yil, int ay, int gun){
    int data;
    data|=yil; data<<=7;
    data|=ay; data<<=4;
    data|=gun; data<<=5;
    return data;
}

void acma(int data){
    int yil,ay,gun;
    yil=127; yil&=data; data>>=7;
    ay=15; ay&data; data>>=4;
    gun=31; gun&data;

    printf("\n%d\t%d\t%d",gun,ay,yil);
}