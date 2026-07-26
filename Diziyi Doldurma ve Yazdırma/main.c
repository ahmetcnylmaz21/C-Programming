#include <stdio.h>

int main()
{                   /// Boyutu 5 olan bir tam sayý dizisini kullanýcýdan doldurup elemanlarýný ekrana yazdýrýnýz.
    int dizi[5];
    int i;

    // Diziyi kullanýcýdan doldur.
    for(i = 0; i < 5; i++)
    {
        printf("%d. eleman: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Diziyi ekrana yazdýr.
    printf("\nDizinin elemanlari:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", dizi[i]);
    }

    return 0;
}
