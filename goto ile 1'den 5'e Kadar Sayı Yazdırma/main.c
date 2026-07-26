#include <stdio.h>
#include <stdlib.h>

int main()
{                   // oto ve bir label kullanarak 1'den 5'e kadar sayýlarý ekrana yazdýran bir program yazýnýz.
    int i = 1;


  baslangic:

      if(i <= 5)
      {
          printf("%d\n", i);

          i++;

          goto baslangic;

      }
      return 0;

}
