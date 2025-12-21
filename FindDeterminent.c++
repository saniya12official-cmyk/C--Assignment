#include <stdio.h>

int main() {
    int n;
    printf("Enter matrix order (2 or 3): ");
    scanf("%d", &n);

    int a[3][3];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int det;

    if (n == 2) {
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    } else {
        det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }

    printf("Determinant = %d\n", det);

    return 0;
}
