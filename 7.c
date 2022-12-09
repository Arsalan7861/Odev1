//11. haftanin uygulamasi.
#include<stdio.h>
void kucukten_buyuge(float dizi[]){
    float temp;
    for(int i=0;i<4;i++)
    {
        for(int k=i+1;k<5;k++)
        {
            if(dizi[k]<dizi[i]){
                temp=dizi[i];
                dizi[i]=dizi[k];
                dizi[k]=temp;
            }
        }
    }
}

int main(){
    float dizi[5];
    for(int i=0;i<5;i++){
        printf("Dizinin %d. elemani giriniz:\t",i+1);
        scanf("%f",&dizi[i]);
    }

    kucukten_buyuge(dizi);
    for(int i=0;i<5;i++){
        printf("%.2f\t",dizi[i]);
    }
    return 0;
}


