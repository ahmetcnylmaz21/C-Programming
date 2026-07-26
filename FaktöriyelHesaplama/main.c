#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullanýcýdan alýnan bir sayýnýn faktöriyelini for döngüsü kullanarak hesaplayan bir program yazýnýz.

        int n , i ;
        long faktoriyel= 1;
         // Kullanýcýdan sayý alýnýr.

        printf("Bir sayi girin :");
        scanf("%d", &n);

         // Faktöriyel hesaplanýr.
    for(i = 1; i <= n; i++)
    {
        faktoriyel *= i; // faktoriyel = faktoriyel* i;

    }

    printf("%d! = %d\n", n, faktoriyel);

    return 0;





}

