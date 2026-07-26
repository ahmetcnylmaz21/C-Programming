#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
    {
        printf("%d sayisi cifttir.\n", sayi);
    }

    if (sayi % 2 != 0)
    {
        printf("%d sayisi tektir.\n", sayi);
    }

    return 0;
}
