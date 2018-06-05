#include<stdio.h>
#include<conio.h>

int i;

unsigned short int a=0x00f0;
unsigned short int b=0x000f;

void ikiliyaz(unsigned short int x){
    i=(sizeof(unsigned short int))*8-1;
    for(; i>=0; i--){
        if(x>>i&1==1){
            putchar('1');
        }
        else putchar('0');
        if(i%4==0) putchar(' ');
    }
}

unsigned short int biryap(unsigned short int x, int hedef){
    unsigned short int mask=0x0001;
    hedef--;
    mask<<=hedef;
    return x|mask;
} 

unsigned short int sifiryap(unsigned short int x, int hedef){
    unsigned short int mask=0x0001;
    hedef--;
    mask<<=hedef;
    mask=0xffff^mask;
    return x&mask;
}

unsigned short int paketleme(unsigned short int x){
    unsigned short int data=0;
    data=data|x; data<<=8;
    return data;
}

unsigned short int paketacma(unsigned short int data){
    unsigned short int x;
    x=0xffff;
    x=x&data;
    data>>=8;
    return x;
    
}


int main(){
    /*
    ikiliyaz(a); printf("\n");
    ikiliyaz(b); printf("\n");

    a=biryap(a, 4); ikiliyaz(a); printf("\n");
    b=biryap(b, 4); ikiliyaz(b); printf("\n");

    a=sifiryap(a,4); ikiliyaz(a), printf("\n");
    b=sifiryap(b,4); ikiliyaz(b); printf("\n");
    */

    unsigned short int data;
    data=paketleme(a); ikiliyaz(data); printf("\n");
    data=paketleme(b); ikiliyaz(data); printf("\n");

    b=paketacma(data); ikiliyaz(b); printf("\n");
    a=paketacma(data); ikiliyaz(a); printf("\n");

    getchar();

}