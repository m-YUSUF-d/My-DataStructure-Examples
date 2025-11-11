#include <stdio.h>
#include <time.h>
/*
Tarih ve zaman ile ilgili isleri yapmak istedigimizde, standart C kütüphanesinden time.h baslik fonksiyonunu cagirmaliyiz.
time.h baslik fonksiyonu, tarih ve zamanla ilgili isleri yapan fonksiyonları icerir.
*/

int main() {
    clock_t start, end;
    // time.h isimli header dosyasinda tanimli, islemci saatini saklamak icin kullanilan veri turu

    double cpu_time_used;
    // Olçulen zamani saniye cinsinden tutmak için tanımlanan degisken

    start = clock();
    // Kod basitce zamanı clock() fonksiyonu ile okur ve dort isleme tabi tutar.
    // Buradaki degisken tipi ise clock_t cinsindendir.

    // ...ISLEMLER...

    end = clock();
    // Tanımlanmıs bir implementasyonun baslangicindan bu yana kullanilan islemcinin saatini dondurur.

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // CLOCKS_PER_SEC islemcinin bir saniyedeki tik sayisini gosterir (<time.h> headerında tanimli)
    // Elde edilen sonucu saniyeye donusturmek icin CLOCKS_PER_SEC degerine bolmek gerekir.

    printf ("Gecen sure = %.9f saniyedir.", cpu_time_used);
}
