#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4 // Burayi 3  10 50  100  200  400 800 gibi farkli degerler yaptigimizda gecen sure etkilenir.
// Eger dizi boyutu define onislemcisi ile belirtilirse boyutun ayrıca parametre olarak kullanilmasina gerek yoktur.

// Iki boyutlu diziyi baslatmanin farklı yollari
// int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
// int c[][3] = {{1, 3, 0}, {-1, 5, 9}};
// int c[2][3] = {1, 3, 0, -1, 5, 9};

int main()
{
    int M1[N][N]={{1,2,3},{4,5,6},{7,8,9}}; // 4 satirli ve 4 sutunlu M1 dizisi
    int M2[N][N]={{1,2,1},{0,0,0},{2,0,1}}; // 4 satirli ve 4 sutunlu M2 dizisi
    int M3[N][N]; // 4 satirli ve 4 sutunlu M3 dizisi

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    MultiplyTwoMatrices(M1,M2,N,M3);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf ("Gecen sure = %.9f saniyedir.", cpu_time_used);

    return 0;
}

void MultiplyTwoMatrices(int m1[][N], int m2[][N], int n, int m3[][N])
{
    int i,j,k,toplam;
    for (i=0;i<n;i++)
        for(j=0;j<n;j++){
            toplam=0;
            for(k=0;k<n;k++){ // Iteratif orneklerden Kubik Dongu
                toplam+=m1[i][k]*m2[k][j];  //Birinci matrisin satirlari ile ikinci matrisin sütunlari carpilir.
            }
            m3[i][j]=toplam;
        }
}


/*
Time Complexitiy (Zaman Karmasikligi): Kosma süresinin girisin boyutuna ne sekilde bagli oldugunu belirtir.

Amac:
- Bir programın ne kadar surecegini tahmin etmek
- Makul bir sekilde programa verilebilecek en büyük giris boyutunu tahmin etmek.
- Farklı algoritmaların verimini karsilastirmak.
- Kodun en çok (en fazla sayida) kosulan kisimlarina odaklanmaya yardimci olmak icin.
- Bir uygulamaya uygun olan algoritmayı secmek icin

Fiili kosma süresinin tam bir olcumunu almak icin C’de <time.h> kütüphane fonksiyonlarından yararlanilir.

Karmasiklik seviyeleri:
n !  > 2^n  >  n^3  >  n^2  >  nlogn  >  n  > logn  >  1

Big Oh (En Kotu Durum)
Big Omega (En Iyı Durum)
Big Theta (Ortalama Durum)
*/
