#include <stdio.h>

// Function to be integrated
float f(float x)
{
    return x * x;
}

int main()
{
    float a, b, h, sum;
    int n, i;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("Number of intervals must be even.\n");
        return 0;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 4 * f(a + i * h);
    }

    sum = (h / 3) * sum;

    printf("Approximate value of integral = %.4f\n", sum);

    return 0;
}