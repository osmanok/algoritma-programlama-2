#include<stdio.h>
#include<conio.h>

void ikiliyaz(int x){
    int i=(sizeof(int))*8-1;
    for(; i>=0; i--){
        if(x>>i&1==1){
            putchar('1');
        }
        else putchar('0');
        if(i%4==0) putchar('\t');
    }
}

int sifiryap(int x, int hedef){
    int mask=1;
    mask<<=hedef;
    mask=~0^mask;
    return x&mask;
}

int biryap(int x, int hedef){
    int mask=1;
    mask<<=hedef;
    return x|mask;
}

int main(){
    int gun,ay,yil,data=0;
    printf("gun :"); scanf("%d",&gun);
    printf("ay  :"); scanf("%d",&ay);
    printf("yil :"); scanf("%d",&yil);

    ikiliyaz(gun); printf("\n");
    ikiliyaz(ay);  printf("\n");
    ikiliyaz(yil); printf("\n");

    //yil 128 2^7 || ay 16 2^4 || gun 32 2^5
    
    data=data|gun; data<<=4;
    data=data|ay; data<<=7;
    data=data|yil;

    ikiliyaz(data);

    gun=31; ay=15; yil=127;

    yil=yil&data; data>>=7;
    ay=ay&data; data>>=4;
    gun=gun&data;

    printf("%d %d %d",gun,ay,yil);
}