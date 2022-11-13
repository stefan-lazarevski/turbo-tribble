/* Да се напише програма што од непознат број на цели броеви кои се внесуваат од тастатура ќе ги определи позициите 
(редните броеви на внесување) на двата последователни броја што ја имаат најголемата сума. 
Програмата завршува ако едно по друго (последователно) се внесат два негативни цели броја.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

     int pol_pos, position, max_suma, sum, previous ,next;
     scanf("%d %d", &previous, &next);
     pol_pos = position = 2;
     max_suma = sum = previous + next;
     while (1){
        if (previous < 0 && next < 0) {
            break;
        }
        sum = previous + next;
        if (sum > max_suma) {
            max_suma = sum;
            pol_pos= position;
        }
        previous = next;
        scanf("%d", &next);
        position++;
     } if (position > 2)
     printf("Broevite se na pozicii %d i %d i nivnata suma e %d",
            pol_pos - 1, pol_pos, max_suma);


    return 0;
}
