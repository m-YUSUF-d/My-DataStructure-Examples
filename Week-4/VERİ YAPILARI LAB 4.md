# **VERİ YAPILARI LAB 4**
1. C’de time.h kütüphanesini kullanarak bir kod bloğunun çalışması için geçen süreyi ölçen program yazın.
  - clock_t tipinde değişkenler kullanarak başlangıç ve bitiş zamanını ölçün.
  - Kod bloğu çalıştıktan sonra geçen süreyi saniye cinsinden hesaplayın (CLOCKS_PER_SEC kullanarak).
  - Elde edilen süreyi ekrana 9 ondalık basamak hassasiyetiyle yazdıran kodunu yazın.
```c

```


2. Bir integer dizideki en büyük elemanı bulan bir fonksiyon (max) yazın.
  - Fonksiyon prototipi: int max(int sayilar[], int uzunluk);
  - Dizi elemanlarını iteratif olarak kontrol ederek en büyük değeri bulun.
  - time.h kütüphanesini kullanarak fonksiyon çalıştıktan sonra geçen süreyi ölçün (clock() ve CLOCKS_PER_SEC).
  - Ekrana dizideki en büyük elemanı ve geçen süreyi 9 ondalık basamak hassasiyetiyle yazdıran kodunu yazın.
```c

```


3. İki N×N boyutlu matrisin çarpımını yapan bir fonksiyon (MultiplyTwoMatrices) yazın.
  - Fonksiyon prototipi: void MultiplyTwoMatrices(int m1[][N], int m2[][N], int n, int m3[][N]);
  - Matris çarpımı işlemini 3 iç içe for döngüsü kullanarak gerçekleştirin (iteratif yöntem).
  - time.h kütüphanesi ile fonksiyon çalıştıktan sonra geçen süreyi ölçün (clock() ve CLOCKS_PER_SEC).
  - Elde edilen süreyi 9 ondalık basamak hassasiyetiyle ekrana yazdıran kodunu yazın.
  - Kodda #define N ile matris boyutunu belirleyin ve farklı değerlerde performansı gözlemleyin.
```c

```


4. Fibonacci sayılarını rekürsif (recursive) yöntemle bulan bir fonksiyon yazın.
  - Fonksiyon prototipi: int fibonacci(int n);
  - n = 0 veya n = 1 için temel durumları (base case) belirleyin.
  - Fonksiyon her çağrıldığında kendisini iki alt çağrı ile tekrar çağırarak Fibonacci dizisini üretmeli.
  - time.h kütüphanesini kullanarak fonksiyon çalıştıktan sonra geçen süreyi ölçün (clock() ve CLOCKS_PER_SEC).
  - for döngüsü ile ilk n Fibonacci sayısını ekrana yazdırın ve geçen süreyi 9 ondalık basamak hassasiyetiyle gösterin.
```c

```