// WAP in c for Newton's Forward Interpolation Formula.
#include <stdio.h>

int main() {
    int n, i, j, l;
    float x[20], f[20][20];
    float X[20], yk, p, u, h, x0;

    // Step 2-3
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");
    for(i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &f[i][0]);
    }

    // Step 4
    printf("Enter number of values to interpolate: ");
    scanf("%d", &l);

    // Step 5
    printf("Enter values of x:\n");
    for(i = 0; i < l; i++) {
        scanf("%f", &X[i]);
    }

    // Step 6-8
    // f[j][0] already stored as y[j]

    // Step 9-13: Forward difference table
    for(i = 1; i < n; i++) {
        for(j = 0; j < n - i; j++) {
            f[j][i] = f[j+1][i-1] - f[j][i-1];
        }
    }

    x0 = x[0];
    h = x[1] - x[0];

    // Step 14-22
    for(int k = 0; k < l; k++) {
        u = (X[k] - x0) / h;
        yk = f[0][0];
        p = 1;

        for(i = 1; i < n; i++) {
            p = p * (u - (i - 1)) / i;
            yk = yk + p * f[0][i];
        }

        printf("x = %.2f, y = %.4f\n", X[k], yk);
    }

    // Step 23
    return 0;
}