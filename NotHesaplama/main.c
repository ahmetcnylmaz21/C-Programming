#include <stdio.h>
#include <stdlib.h>

int main()
{       // Kullanıcıdan 0-100 arasında bir not alınız.

//Aşağıdaki kurala göre harf notunu yazdırınız.

//90-100 → AA
//80-89 → BA
//70-79 → BB
//60-69 → CB
//50-59 → CC
//0-49 → FF

    int not;

    printf("Notunuzu giriniz: ");
    scanf("%d", &not);

    if(not >= 90)
        printf("AA");
    else if(not >= 80)
        printf("BA");
    else if(not >= 70)
        printf("BB");
    else if(not >= 60)
        printf("CB");
    else if(not >= 50)
        printf("CC");
    else
        printf("FF");

    return 0;
}



