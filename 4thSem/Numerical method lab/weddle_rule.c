#include <stdio.h>

// Function to be integrated
float f(float x)
{
    return x * x;
}

int main()
{
    float a, b, h, integral = 0;
    int n, i;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of intervals (multiple of 6): ");
    scanf("%d", &n);

    if (n % 6 != 0)
    {
        printf("Number of intervals must be a multiple of 6.\n");
        return 0;
    }

    h = (b - a) / n;

    for (i = 0; i < n; i += 6)
    {
        integral += (3 * h / 10) *
                    (f(a + i * h)
                    + 5 * f(a + (i + 1) * h)
                    + f(a + (i + 2) * h)
                    + 6 * f(a + (i + 3) * h)
                    + f(a + (i + 4) * h)
                    + 5 * f(a + (i + 5) * h)
                    + f(a + (i + 6) * h));
    }

    printf("Approximate value of integral = %.6f\n", integral);

    return 0;
}