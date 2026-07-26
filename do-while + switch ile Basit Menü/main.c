#include <stdio.h>

int main()
{
    int secim, a, b ;

    do
    {
        // Menü ekrana yazdýrýlýr.
        printf("\n--- MENU ---\n");
        printf("1- Topla\n");
        printf("2- Cikar\n");
        printf("3- Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch(secim)
        {
            case 1:
                printf("Birinci sayi: ");
                scanf("%d",&a);

                printf("Ikinci sayi: ");
                scanf("%d",&b);

                printf("Sonuc: %d\n",a+b);
                break;

            case 2:
                printf("Birinci sayi: ");
                scanf("%d",&a);

                printf("Ikinci sayi: ");
                scanf("%d",&b);

                printf("Sonuc: %d\n",a-b);
                break;

            case 3:
                printf("Programdan cikiliyor...\n");
                break;

            default:
                printf("Gecersiz secim!\n");
        }

    } while(secim != 3);

    return 0;
}
