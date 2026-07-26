#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;

    printf("Lutfen bir sayi giriniz :");
    scanf("%d", &a);
    printf("Lutfen bir sayi daha giriniz :");
    scanf("%d", &b);

    if(a>b){
        printf("%d daha buyuktur ", a );

    }

    else if (a<b){
        printf("%d daha buyuktur  b);

    }

    else{
        printf("Ýki sayi birbirine eþittir.");

        return 0 ;

    }


}
