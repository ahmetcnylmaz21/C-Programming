#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi ;

    // Ýlk sayý alýnýr.

    printf("Bir sayi girin (0=cikis)");
    scanf("%d" , &sayi );


     // Sayý 0 olmadýðý sürece çalýþýr.
    while(sayi != 0)
     {
        printf("Girilen sayi: %d\n", sayi);

        printf("Bir sayi girin (0 = cikis): ");
        scanf("%d", &sayi);
    }
    printf("Program sonlandi.\n");

    return 0;
}
