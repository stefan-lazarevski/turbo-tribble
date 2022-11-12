/* Да се состави програма што ќе ги отпечати сите прости броеви помали од даден број */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, k, n, x=0;
    printf("Vnesi broj: ");
    scanf("%d", &n);
    printf("Prosti broevi pomali od %d se\n", n);
    for (i = 1; i < n; i+=2)
    {
        k = 1;
        for(j = 2; j <= sqrt(1); j++)
        if(i%j == 0){
            k = 0; break;
        }
        if(k){
            printf("%d ", i); x++;
        }
    }
    printf("\n Vkupno %d prosti broevi", x);


    return 0;
}
