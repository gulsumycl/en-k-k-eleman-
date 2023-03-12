#include <stdio.h>
#define elemanSayisi 5 // eleman sayýsýna N diyelim 

int minBul(int dizi[]){
     int min;    
     int i;
     min = dizi[0]; // 1 kere çalýþýr.

     for(i=0 ; i<elemanSayisi ; i++){  // i=0 1 kere çalýþýr.,i<elemanSayisi eleman sayýsý  kadar çalýþýr. i++ eleman sayýsýnýn 1 eksiði kadar çalýþýr. 1+N+N-1 = 2N
          if(min > dizi[i]) // N-1 kere çalýþýr
               min = dizi[i];  //N-1 kere çalýþýr
     }

     return min; // 1 kere çalýþýr.
}  // T(N)= 4N 

int main(){
     int sayilar[elemanSayisi];
     int i;

     for( i=0 ; i<elemanSayisi ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &sayilar[i]);
     }

     printf("Dizideki en kucuk sayi : %d", minBul(sayilar));
     
     return 0;
 }
