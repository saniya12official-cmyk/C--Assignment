#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter sizes of two arrays: ");
    scanf("%d %d", &n1, &n2);

    int a[n1], b[n2];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    printf("Common elements:\n");
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            if (a[i] == b[j])
                printf("%d ", a[i]);

    return 0;
}
