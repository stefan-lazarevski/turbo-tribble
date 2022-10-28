/* Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100). 
Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот */

#include <stdio.h>

int main()
{

   float cena, kamata, rata, vkupno;
   int br_rati;
   printf("Vneseta ja cenata na proizvodot: ");
   scanf("%f", &cena);
   printf("Vnese go brojo na rati: ");
   scanf("%d", &br_rati);
   printf("Vnesete ja kamatata: ");
   scanf("%f", &kamata);
   vkupno = cena * (1 + kamata / 100);
   rata = vkupno / br_rati;
   printf("Edna rata kje iznesuva: %.3f\n", rata);
   printf("Vkupnata isplatena suma ke bide %.3f\n", vkupno);



    return 0;
}
