//Benzin istasyonundaki gelen arabalarin sayisini hesaplamak.
#include <stdio.h>
int main(){
int a=0,a1=0,a2=0,a3=0,a4=0;
float b,s1=0,s2=0,s3=0,s4=0;
printf("Sistemden cikmak icin 111 0 kodu giriniz!\n");
   while (a!=111) {
    printf("Marka, tutari giriniz: ");
    scanf("%d %f",&a,&b);
     switch(a) {
      case 1:a1++;s1=s1+b;break;
      case 2:a2++;s2=s2+b;break;
      case 3:a3++;s3=s3+b;break;
      case 4:a4++;s4=s4+b;break;
      case 111:break;
      default:printf("Boyle bir marka yok. Lutfen tekrarlayiniz\n");break; }
    }
    printf("En cok gelen arac markasi: ");
      if ((a1>=a2)&&(a1>=a3)&&(a1>=a4))
         printf("Renault (%d kez)\n",a1);
      else if ((a2>=a1)&&(a2>=a3)&&(a2>=a4))
         printf("Mazda (%d kez)\n",a2);
      else if ((a3>=a2)&&(a3>=a1)&&(a3>=a4))
         printf("Honda (%d kez)\n",a3);
      else if ((a4>=a2)&&(a4>=a3)&&(a4>=a1))
         printf("Ford (%d kez)\n",a4);
         printf("En cok satis yapilan marka: ");
      if ((s1>=s2)&&(s1>=s3)&&(s1>=s4))
         printf("Renault (%.2f YTL)",s1);
      else if ((s2>=s1)&&(s2>=s3)&&(s2>=s4))
         printf("Mazda (%.2f YTL)",s2);
      else if ((s3>=s2)&&(s3>=s1)&&(s3>=s4))
         printf("Honda (%.2f YTL)",s3);
      else if ((s4>=s2)&&(s4>=s3)&&(s4>=s1))
         printf("Ford (%.2f YTL)",s4);
return 0;
}
