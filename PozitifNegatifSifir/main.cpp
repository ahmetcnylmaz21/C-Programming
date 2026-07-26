#include <iostream>

using namespace std;

int main()
{
    int sayi ;

    printf("Lutfen bir sayi giriniz :");
    scanf("%d",  &sayi );

        if(sayi>0){
            printf("Girdiginiz sayi pozitiftir");
        }
            else if (sayi<0){
            printf("Girdiginiz sayi negatiftir");
        }
            else{
                printf("Sayi sifirdir. ");
        }
        return 0 ;

}
