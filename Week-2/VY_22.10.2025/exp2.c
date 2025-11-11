#include <stdio.h>
#include <stdlib.h>
#include "exp2.h" // Header file

/*
Header file (Baslik dosyasi):“.h” uzantisi ile biten C fonksiyon tanimlamalari ve makro tanimlamalarini iceren birkac kaynak dosya arasinda paylasilan dosyalardir.
Iki tip baslik dosyasi vardir: programcinin yazdigi baslik dosyalari ve derleyici ile gelen baslik dosyalari.
*/


/*
Bazı programlarda bir ogeye ait birkac farklı özellik için farklı tiplerde değişkenler kullanmamız gerekir.
Örnegin 2 boyutlu düzlemdeki bir noktanin konumu için x ve y koordinatlari için iki ayri degiskene ihtiyaç duyariz.
Bu tip durumlar için C'de kullanilan yapi 'struct' dir.
Struct içerisinde istenilen tipte degisken tanimlanabilir.
Bunu içindeki verileri bir arada tutan bir veri paketi olarak düsünebilirsiniz.

Struct pointer olarak da tanimlanabilir.
Bu sekilde tanimlandiginda degiskenlere erisim için '->' isareti kullanilir.
*/


int main (void) {
    int* newData;
    int* nodeData;

    NODE* node;

    newData = (int*)malloc (sizeof (int)); // malloc icerisindeki boyut kadar yer ayirir ve ayirdigi yerin ilk degerini bizim pointerimiza gonderir.
    // Ve burada belirttigimiz tur cinsinden bunu yapar, burada (int*) ile integer olarak sectik.
    // ptr= (Cost Type*)malloc(Boyut);
    // malloc fonksiyonu ile isletim sisteminden bellek talebinde bulunuruz.
    // Fonksiyon yalnızca bellek uzunlugunu parametre olarak alır, donus degeri ise ayrilmis bellegin baslangic adresidir, hata durumunda ise NULL degeri dondurur.

    *newData = 7;

    node = createNode (newData);
    nodeData = (int*)node->dataPtr;
    printf ("Data from node: %d\n", *nodeData);

    return 0;
}
