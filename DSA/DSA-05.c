#include <stdio.h>

int main() {
    int arr[100], n, i;
    int smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Write:");
        scanf("%d", &arr[i]);
    }
   
    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("This is the smallest element: %d\n", smallest);
    return 0;
}