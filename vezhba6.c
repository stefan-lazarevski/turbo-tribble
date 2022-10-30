/* Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg).
 Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање. */

#include <stdio.h>

int main()
{

    long int datum;
    int den, mesec;
    printf("Vnesi datum na raganje: ");
    scanf("%ld", &datum);
    den = datum / 1000000;
    mesec = (datum / 10000) % 100;
    printf("Denot i mesecot na raganje se %02d.%02d\n", den , mesec);


    return 0;
}
