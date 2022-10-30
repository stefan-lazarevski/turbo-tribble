/* Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се провери дали од дадените отсечки може да се конструра триаголник. 
Ако може, да се испечати дали триаголникот е разностран, рамностран или рамнокрак и да му се пресмета плоштината. */

#include <stdio.h>
#include <math.h>

int main()
{

    float a , b, c;
    printf("Vnesi dolzini na strani: \n");
    scanf("%f %f %f", &a ,&b , &c);
    if ((a + b <= c)|| (a + c <=b) || (b + c <=a))
        printf("Ne moze da se konstruira triagolnik.\n");
    else {
        if (a == b && b == c)
            printf("Triagolnikot e ramnostran.\n");
        else if (a == b || b == c || a == c)
            printf("Triagolnikot e ramnokrak.\n");
        else
            printf("Triagolnikot e raznostran.\n");
        float p, s = (a+ b + c) / 2;
        p = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Ploshtina mu e %7.3f\n", p);
    }


    return 0;
}
