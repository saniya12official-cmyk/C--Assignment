#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    printf("Average = %.2f\n", sum / n);
    return 0;
}
