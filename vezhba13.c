/* Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај 
кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра. 

Example:
4031 (4=0+3+1), 5131 (5=1+3+1) */

#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i, n ,suma, prv_broj, broj;
   i = 1000;
   while ( i <= 9999){
    prv_broj = i / 1000;
    n = i % 1000;
     suma = 0;
     while ( n > 0){
        broj = n % 10;
        suma += broj;
        n/= 10;
     }
     if (suma == prv_broj) printf("%d\t", i);
     i++;
   }

    return 0;
}
