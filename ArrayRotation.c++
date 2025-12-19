#include <stdio.h>

int main() {
    int n, d;
    printf("Enter size and rotation count: ");
    scanf("%d %d", &n, &d);

    int a[n], temp[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    d = d % n;

    for (int i = 0; i < n; i++)
        temp[i] = a[(i + d) % n];

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) printf("%d ", temp[i]);

    return 0;
}
