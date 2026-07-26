#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullanıcıdan alınan pozitif bir sayının tersini (Örnek: 123 → 321) while döngüsü kullanarak bulan bir program yazınız.


        int sayi , kalan , ters = 0;

        printf("Lutfen bir sayi giriniz : ");
        scanf("%d" , &sayi);


        // Sayının tersi hesaplanır.

        while(sayi != 0)
       {
        kalan = sayi % 10;        // Son basamağı al
        ters = ters * 10 + kalan; // Ters sayıyı oluştur
        sayi /= 10;               // Son basamağı sil
       }

       printf("Tersi : %d\n" , ters  );
       return 0;

}

