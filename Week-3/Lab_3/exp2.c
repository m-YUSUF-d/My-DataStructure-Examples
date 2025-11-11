#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Bir dizide (array), bir listenin ardisil olusu, dizideki elemanlarin sira yapisi ile saglanir (indexes).
Dizide bir eleman arama islemi cok hizli ve etkili olabilse de, eleman silme ve ekleme islemleri karmasik ve yavas sureclerdir.

Bağlı listenin diziye göre en büyük avantajı,verilerin kolayca eklenmesi ve silinmesidir.
Yeni bir öğeye yer açmak veya bir öğeyi silmek için bağlı listedeki öğelerin kaydırılması gerekmez.
Bununla birlikte, bağlı listede elemanlar artık fiziksel olarak ardışık olmadığından, sıralı aramalarla (sequential search) sınırlıdır.
*/


int main()
{
    int sayilar[5]={1,2,50,25,33};

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int maks= max(sayilar,5);
    printf("Sayilar dizisinin en büyük elemanı %d\n",maks);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf ("Gecen sure = %.9f saniyedir.", cpu_time_used);

    return 0;
}

int max (int sayilar[], int uzunluk)

{
    //int *p = sayilar ile çalışabiliyorduk.

    int maks = sayilar[0];
    int i;

    for(i=1; i<uzunluk;i++) // Iteratif orneklerden Linear Dongu

    {
        if(sayilar[i] > maks)
        {
            maks = sayilar[i];
        }
    }
    return maks;
}








