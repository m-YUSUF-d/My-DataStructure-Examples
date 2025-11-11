/*
Pointer: Bir degiskenin veya veri yapisinin(array, struct, vb.) bellekte(RAM) nerede bulundugunu tutan bir veri tipidir.
Verinin kendisi yerine bellekteki yeriyle ilgileniriz çünkü:
- Bellek(RAM) alanini daha iyi yönetmek
- Daha az ve daha basit kod yazmak
- Daha optimize kod yazmak ve derleyicinin daha fazla optimizasyon yapmasina olanak saglamak.
*/


/*
#include <stdio.h>
int main () {

int i=5;
int *p=&i; // Burada p pointeri, i degiskeninin adresini tutar.
printf("%p\n",p); // %p veya %x pointerlarin adresleri icin kullanilir, hexadecimal (Onaltılık sayi sistemi) turunde bize pointerimizin adresini verir.
// %u ile de bastirabiliriz.
// %p: pointer adresi
// %x: int unsigned hex
// %u: int unsigned decimal
printf("%d",*p); // Adresteki degeri verir.

   return 0;
}
*/


/*
Generic type pointer: Kendisiyle iliskili veri türü olmayan bir pointerdir.
Bu pointer herhangi bir türdeki adresi tutabilir ve herhangi bir türe atanabilir.
*/

/*
#include <stdio.h>
int main () {
    void* p; // Generic type pointer

    int i = 7;
    float f = 23.5;

    p = &i;
    printf ("i contains: %d\n", *((int*)p) );
    // & degiskenin adres bilgisini verir.
    // * adresteki deðeri verir.
    // (int*) ifadesini yazmazsak program derlenmez.

    p = &f;
    printf ("f contains: %f\n", *((float*)p));

    return 0;
}
*/
