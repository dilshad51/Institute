#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x - x - 1;
}

int main()
{
    float a, b, c;
    int n, i;

    printf("Enter the interval a b: ");
    scanf("%f %f", &a, &b);

    if (f(a) * f(b) > 0)
    {
        printf("Root does not lie in the interval.\n");
        return 0;
    }

    printf("Enter number of iterations: ");
    scanf("%d", &n);

    printf("\nIter\t a\t\t b\t\t c\t\t f(c)\n");

    for(i = 1; i <= n; i++)
    {
        c = (a + b) / 2;

        printf("%d\t %.4f\t %.4f\t %.4f\t %.4f\n",
               i, a, b, c, f(c));

        if(f(c) == 0.0)
            break;

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("\nApproximate root = %.4f\n", c);

    return 0;
}