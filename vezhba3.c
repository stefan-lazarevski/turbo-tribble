#include <stdio.h>

int main()
{

    int integer1;
    int integer2;
    int sum;
    float kol;

    printf("Vnesi prv cel broj\n");
    scanf("%d", &integer1);

    printf("Vnesi vtor cel brpj\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    kol= (float) integer1 / integer2;

    printf("Nivnata suma e %d\n", sum);
    printf("Nivniot kolicnik e %.2f\n", kol);


    return 0;
}
