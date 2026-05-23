// WAP in c for Newton's Backward Interpolation Formula.
#include <stdio.h>

int main() {
    int n, i, j, l;
    float x[20], f[20][20];
    float X[20], yk, p, u, h, xn;

    // Step 2
    printf("Enter number of data points: ");
    scanf("%d", &n);

    // Step 3
    printf("Enter x and y values:\n");
    for(i = 0; i <= n; i++) {
        scanf("%f %f", &x[i], &f[0][i]);
    }

    // Step 4
    printf("Enter number of values to interpolate: ");
    scanf("%d", &l);

    // Step 5
    printf("Enter values of x:\n");
    for(i = 0; i < l; i++) {
        scanf("%f", &X[i]);
    }

    // Step 9–13: Backward difference table
    for(i = 1; i <= n; i++) {
        for(j = i; j <= n; j++) {
            f[i][j] = f[i-1][j] - f[i-1][j-1];
        }
    }

    xn = x[n];
    h = x[1] - x[0];

    // Step 14–22
    for(int k = 0; k < l; k++) {
        u = (X[k] - xn) / h;
        yk = f[0][n];   // yn
        p = 1;

        for(i = 1; i <= n; i++) {
            p = p * (u + i - 1) / i;
            yk = yk + p * f[i][n];
        }

        printf("x = %.2f, y = %.4f\n", X[k], yk);
    }

    // Step 23
    return 0;
}