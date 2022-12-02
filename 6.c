//On birinci haftanin odevi.
#include<stdio.h>

//Dizideki sayilarinin ortalamasi.
float ortalamaBul(int sayi[]){
    int i,toplam=0;
    float ort;
    for(i=0;i<5;i++){            
    toplam+=sayi[i];
    }
    ort=toplam/5.0;
    return ort;
}

//En  cok tekrar olan sayinin kac kez tekrar oldugunu gostermek.
int kacKereGecti(int cok[], int aranan){
    int sayac=0;
    for(int i=0;i<5;i++){
        if(cok[i]==aranan)
        {
            ++sayac;
        }
    }
    return sayac;
}

//Dizideki en buyuk elemani bulmak.
int enBuyukElemani(int dizi[]){
    int max=0;
    for(int i=0;i<5;i++){
        if(dizi[i]>max)
        {
            max = dizi[i];
        }
    }
    return max;
}

//Dizideki en kucuk elemani bulmak.
int enKucukEleman(int dizi[]){
    int min=dizi[1];
    for(int i=0;i<5;i++){
        if(dizi[i]<min)
        {
            min = dizi[i];
        }
    }
    return min;
}

//Dizideki ikinci buyuk elemani bulmak.
int ikinciBuyukElemani(int dizi[]){
    int max1;
    int max2;
    for(int i=0;i<5;i++){
        if(dizi[i]>max1)
        {
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i]<max1 && dizi[i]>max2)
        {
            max2=dizi[i];
        }
    }
    return max2;
}

//Ortalama degerinden buyuk elemani bulmak.
float ortalamaDegerindenBuyuk(int dizi[]){
    int toplam=0;
    float ort;
    for(int i=0;i<5;i++){
        toplam+=dizi[i];
    }
    ort=toplam/5.0;
    for(int j=0;j<5;j++){
        if(dizi[j]>ort)
        {
            ort=dizi[j];
        }
    }
   return ort;
}
//Ana fonksiyonu.
int main(){
    int dizi[5];
    int i;
    for(i=0; i<5; i++){
        printf("Dizideki %d. elemani: ",i);
        scanf("%d",&dizi[i]);
        }
    printf("==>Ortalama:%.2f\n",ortalamaBul(dizi));
    printf("==>En cok tekrarlanan sayinin kac kere gectigi: %d\n",kacKereGecti(dizi,dizi[i]));
    printf("==>En buyuk elemani: %d\n",enBuyukElemani(dizi));
    printf("==>En kucuk elemani: %d\n",enKucukEleman(dizi));
    printf("==>Ikinci buyuk elemani: %d\n",ikinciBuyukElemani(dizi));
    printf("==>Ortalama degerinden buyuk elemani: %.2f\n",ortalamaDegerindenBuyuk(dizi));
 return 0;
 }

