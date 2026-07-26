#include <stdio.h>

int main()
{                       //  Kullanýcýdan negatif olmayan bir sayý girilene kadar tekrar soran, bu iþlemi goto kullanarak gerçekleþtiren bir program yazýnýz.
    int sayi;

tekrarSor:

    // Kullanýcýdan sayý alýnýr.
    printf("Negatif olmayan bir sayi girin: ");
    scanf("%d", &sayi);

    // Negatif sayý girilmiþse tekrar istenir.
    if(sayi < 0)
    {
        printf("Gecersiz! Tekrar deneyin.\n");
        goto tekrarSor;
    }

    printf("Girilen gecerli sayi: %d\n", sayi);

    return 0;
}
