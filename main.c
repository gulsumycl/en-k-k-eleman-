#include <stdio.h>
#define elemanSayisi 5 // eleman say�s�na N diyelim 

int minBul(int dizi[]){
     int min;    
     int i;
     min = dizi[0]; // 1 kere �al���r.

     for(i=0 ; i<elemanSayisi ; i++){  // i=0 1 kere �al���r.,i<elemanSayisi eleman say�s�  kadar �al���r. i++ eleman say�s�n�n 1 eksi�i kadar �al���r. 1+N+N-1 = 2N
          if(min > dizi[i]) // N-1 kere �al���r
               min = dizi[i];  //N-1 kere �al���r
     }

     return min; // 1 kere �al���r.
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
