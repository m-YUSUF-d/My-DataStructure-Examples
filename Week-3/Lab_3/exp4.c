#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
// Recursive Hatirlatma
#include <stdio.h>
#include <stdlib.h>

int F(int sayi)
{
    if(sayi==1)
        return 1;
    return sayi*F(sayi-1);
}

 int main()
{
    int a= F(6);
    printf("Faktoriyel: %d",a);
}
*/



// Fibonacci sayilari: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

// Recursion icin, her dugum iki alt dala boluneceginden zaman karmasikligi O(2^n) olacaktir.
// Ve agacin derinligi n'nin boyutuyla orantili olacagindan space karmasikligi O(N) olacaktir.
// Time complexity: Bir algoritmanın zaman karmasikligi; girdi boyutu ile ilgili olarak olculen, algoritma tarafından atilan adim sayisini tanimlar.
// Space complexity: Bir algoritmanın alan karmasikligi; girdi boyutu ile ilgili olarak olculen, algoritmanın kosmasi icin gereken bellek miktarini tanimlar.


/*
int main()
{

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int sayi=40;

    for(int i=0; i<sayi; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf ("\nGecen sure = %.9f saniyedir.", cpu_time_used);

}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

*/

