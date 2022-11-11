//Lisansustu ogrenciler icin almalari gereken puanlar

#include<stdio.h>
int main()
{
   int ALES, YDS, MO;
   float Ort;
   printf("ALES puanizi yaziniz: ");
   scanf("%d", &ALES);
   printf("YDS puanizi yaziniz:  ");
   scanf("%d", &YDS);
   printf("MO'nizi yaziniz: ");
   scanf("%d", &MO);
   Ort= ALES * 0.5 + YDS * 0.25 + MO * 0.25;
   printf("Ortalama: %f\n", Ort);
   if (Ort>=60)
   {if (YDS<70)
   printf("basarisiz");
   else
   printf("basarili");
}
else
{
	printf("basarisiz");
   }   
   
	
	return 0;
} 