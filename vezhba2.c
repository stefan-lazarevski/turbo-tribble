/* Наоѓање на најзначајната цифра во бројот и најмалку значајна цифра! */


#include <stdio.h>

int main()
{

    int broj;
    scanf("%d", &broj);
    printf("Najznachajna cifra e %d\n", broj/100);
    printf("Najmalku znachajna cifra e %d\n", broj%10);
    printf("%d",(broj/100+broj%10)>((broj/10)%10)*2);


    return 0;
}
