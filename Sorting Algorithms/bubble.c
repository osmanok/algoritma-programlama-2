#include<stdio.h>
#include<stdlib.h>

void bubblesort(int *dizi, int boyut){
    int i,j,temp;
    for(i=0; i<boyut; i++){
        for(j=0; j<boyut; j++){
            if(dizi[j]>dizi[j+1]){
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
    }
}

int main(){
    int i;
    int dizi[10];
    for(i=0; i<10; i++){
        dizi[i]=rand()%20;        
    }

    bubblesort(dizi, 10);

    for(i=0; i<10; i++){
        printf("%d\t",dizi[i]);        
    }

}