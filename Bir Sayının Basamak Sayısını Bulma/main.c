#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, basamakSayisi = 0;

    printf("Lutfen bir sayi giriniz : ");
    scanf("%d", &sayi);

    if (sayi == 0)
    {
        basamakSayisi = 1;
    }

    // Sayi 10'a bölünerek basamak sayýsý bulunur.
    while (sayi != 0)
    {
        sayi /= 10;
        basamakSayisi++;
    }

    printf("Basamak sayisi: %d\n", basamakSayisi);

    return 0;
}
