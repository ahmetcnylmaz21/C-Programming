#include <stdio.h>
#include <stdlib.h>

void anaMenu()
{
    printf("=================================\n");
    printf("          ScoutTR\n");
    printf("=================================\n\n");

    printf("1. Oyuncu Islemleri\n");
    printf("2. Takim Islemleri\n");
    printf("3. Mac Islemleri\n");
    printf("0. Cikis\n\n");
}

void oyuncuMenu()
{
    printf("\n========== OYUNCU ISLEMLERI ==========\n\n");

    printf("1. Oyuncu Ekle\n");
    printf("2. Oyuncu Sil\n");
    printf("3. Oyuncu Listele\n");
    printf("0. Geri\n\n");
}

int main()

{
    int secim;

    anaMenu();

    printf("Seciminiz: ");
    scanf("%d", &secim);

    switch(secim)
    {
        case 1:
            oyuncuMenu();
            break;

        case 2:
            printf("\nTakim Menusune Hosgeldiniz.\n");
            break;

        case 3:
            printf("\nMac Menusune Hosgeldiniz.\n");
            break;

        case 0:
            printf("\nProgram Kapatiliyor...\n");
            break;

        default:
            printf("\nHatali Secim!\n");
    }

    return 0;
}
