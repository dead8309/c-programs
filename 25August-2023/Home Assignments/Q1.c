#include <stdio.h>
#include <math.h> /* this library is used for sqrt() */

int main()
{
    float a, b, c, r1, r2, im, dis;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    /* Calculate discriminant */
    dis = (b * b) - (4 * a * c);
    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch(dis > 0)
    {
        case 1:
            /* If discriminant is positive */
            r1 = (-b + sqrt(dis)) / (2 * a);
            r2 = (-b - sqrt(dis)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f",  r1, r2);
            break;

        case 0:
            /* If discriminant is not positive */
            switch(dis < 0)
            {
                case 1:
                    /* If discriminant is negative */
                    r1 = r2 = -b / (2 * a);
                    im = sqrt(-dis) / (2 * a);

                    printf("Two distinct complex roots: %.2f + i%.2f and %.2f - i%.2f", r1, im, r2, im);
                    break;
                case 0:
                    /* If discriminant is zero */
                    r1 = r2 = -b / (2 * a);
                    printf("Two equal and real roots: %.2f and %.2f", r1, r2);
                    break;
            }
    }
    return 0;
}