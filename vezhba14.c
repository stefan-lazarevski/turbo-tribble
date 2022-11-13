/* Да се напише програма што од N цели броеви внесени од тастатура ќе ја определи разликата од сумите на броевите на парни и непарни позиции 
(според редоследот на внесување). Ако оваа разлика е помала од 10 на екран се печати "Dvete sumi se slicni", 
а во спротивно "Dvete sumi mnogu se razlikuvaat". 

пример 

За броевите внесени од тастатура: 2 4 3 4 2 1 1 6 1 7 
suma_neparni_pozicii = 9 
suma_parni_pozicii = 22 
На екран ќе се испечати:Dvete sumi mnogu se razlikuvaat */

#include <stdio.h>
#include <stdlib.h>

int main()
{

     int razlika, i ,n = 0, broj = 0;
     int suma_neprani_pozici = 0, suma_parni_pozici = 0;
     scanf("%d", &n);
     for (i = 1; i <= n; i++) {
        scanf("%d", &broj);
        if (i % 2) {
            suma_neprani_pozici += broj;
        } else {
            suma_parni_pozici += broj;
        }
     }
      razlika = suma_parni_pozici - suma_neprani_pozici;
      if (razlika < 10 && razlika > -10) {
        printf("Dvete sumi mnogu se slichni");
      } else {
      printf("Dvete sumi mnogu se razlikuvaat");
      }


    return 0;
}
