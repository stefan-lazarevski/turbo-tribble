/* Да се напише програма што проверува дали дадена година што се вчитува од тастатура е престапна или не и на екран печати соодветна порака.
Пример престапни години: 1976, 2000, 2004, 2008, 2012…  Годината е престапна ако е делива со 4 но не е делива со 100 или е делива со 400.*/

#include <stdio.h>

int main()
{

    int godina;
    printf("Vnesi godina: \n");
    scanf("%d", &godina);
    if ((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0)
        printf("%d e prestapna.\n", godina);
    else
        printf("%d e prosta. \n", godina);


    return 0;
}
