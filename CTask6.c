#include <stdio.h>
int main() {
    int n = 3;
    int i, j;
    int zerocount = 0; // initialize
    int arr[3][3];

    // Input matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element of array [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display matrix and check
    printf("\nSeating Chart Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] == 0) {
                zerocount++;
                printf("\n-- Student at row %d, column %d is NOT in correct seat.", i, j);
            } else {
                printf("\n-- Student at row %d, column %d is in the correct seat.", i, j);
            }
        }
        printf("\n");
    }

    printf("\nTotal wrong or empty seats: %d\n", zerocount);
    return 0;
}
