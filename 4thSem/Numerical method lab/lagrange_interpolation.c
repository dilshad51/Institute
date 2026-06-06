#include <stdio.h>

int main() {
    int n, i, j;
    float x[20], y[20], xp, yp = 0, p;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and y:\n");
    for(i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

    printf("Enter the value of x at which y is to be found: ");
    scanf("%f", &xp);

    for(i = 0; i < n; i++) {
        p = 1;

        for(j = 0; j < n; j++) {
            if(i != j) {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }

        yp = yp + p * y[i];
    }

    printf("Interpolated value at x = %.2f is y = %.4f\n", xp, yp);

    return 0;
}