/* Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно. */


#include <stdio.h>

int main()
{

    char ch;
    int rezultat;
    printf("Enter char: ");
    scanf("%c", &ch);
    rezultat = (ch >= 'a') && (ch <= 'z');
    rezultat = (ch >= '0') && (ch <= '9');
    printf("%d\n", rezultat);

    return 0;
}
