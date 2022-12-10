/*
Да се напиши програма која ке го пресмета просекот на 10 броеви внесени од тастатура. За секој број да се отпечати дали е под или над просекот.
*/
#include <stdio.h>

int main() {

    int broj[10], n;
    float prosek=0;
    printf("Vnesuvaj broevi:\n");
    for(n=0;n<10;n++)
        scanf("%d", &broj[n]);
    for(n=0;n<10;n++)
        prosek+=broj[n];
    prosek/=n;
    printf("Srednata vrednost na vnesenite broevi e: %f\n", prosek);
    for(n=0;n<10;n++)
        printf("%d %s %f\n", broj[n],
               broj[n]>prosek?"> ":"<=",prosek);


   return 0;
}
