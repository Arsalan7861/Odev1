//Yildizlarla eskenat ucgen olusturmak.
#include<stdio.h>
void main(){
    //TS: toplam satir
    //S: Satir
    //B: bosluk
    //SE: sembol
    int TS, S, B, SE;
    printf("satir sayiniz giriniz: ");
    scanf("%d", &TS);
    for(S=1; S<=TS; S++){
            for(B=1; B<=(TS-S); B++){
            printf(" ");}

            for(SE=1; SE<=(2*S-1); SE++){
            printf("*");}

        printf("\n");

    }
}
