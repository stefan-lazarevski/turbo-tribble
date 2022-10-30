/* Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка! */

#include <stdio.h>

int main()
{

    int poeni, ocena = 0;
    printf("Vnesi poeni: \n");
    scanf("%d", &poeni);
    if (poeni < 0 || poeni > 100)
        printf("Nevalidna vrednost za poeni! \n");
    else {
        if (poeni > 90) ocena = 10;
    else if (poeni > 80) ocena = 9;
    else if (poeni > 70) ocena = 8;
    else if (poeni > 60) ocena = 7;
    else if (poeni > 50) ocena = 6;
    else ocena = 5;
        printf("Ocena %d\n", ocena);
    }


    return 0;
}

/* Со додавање на знаците - и +*/

#include <stdio.h>

int main()
{

    int poeni, ocena = 0;
    printf("Vnesi poeni: \n");
    scanf("%d", &poeni);
    if (poeni < 0 || poeni > 100)
        printf("Nevalidna vrednost za poeni! \n");
    else {
        if (poeni > 90) ocena = 10;
    else if (poeni > 80) ocena = 9;
    else if (poeni > 70) ocena = 8;
    else if (poeni > 60) ocena = 7;
    else if (poeni > 50) ocena = 6;
    else ocena = 5;
        char znak = ' ';
        int pc = poeni & 10;
        if (ocena != 5) {
            if (pc >= 1 && pc <= 3) znak = '-';
            else if (ocena !=10 && (pc >= 8 || pc == 0))
                znak = '+';
        }
        printf("Ocenka %d%c\n", ocena , znak);
    }

    return 0;
}

