#include <stdio.h>

int main()
{                           // Kullanıcı sabit bir sayıyı (7) doğru tahmin edene kadar tekrar tekrar sayı girsin. Doğru tahminde "Doğru!" mesajı verilsin. (do-while)
    int hedef = 7;
    int tahmin;

    do
    {
        // Tahmin alınır.

        printf("Bir sayi tahmin edin: ");
        scanf("%d", &tahmin);

        // Yanlış tahminde uyarı verilir.

        if(tahmin != hedef)
        {
            printf("Yanlis, tekrar deneyin.\n");
        }

    } while(tahmin != hedef);

    printf("Dogru!\n");

    return 0;
}
