#include <stdio.h>

int main()
{
    int cities, days;
    int i, j, k;
    float temp[10][10][3];
    float max;

    printf("Enter number of cities: ");
    scanf("%d", &cities);

    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("\nEnter temperature data (Morning, Afternoon, Night):\n");
    for (i = 0; i < cities; i++) {
        printf("\n--- City %d ---\n", i + 1);
        for (j = 0; j < days; j++) {
            printf("Day %d:\n", j + 1);
            for (k = 0; k < 3; k++) {
                if (k == 0)
                    printf("  Morning: ");
                else if (k == 1)
                    printf("  Afternoon: ");
                else
                    printf("  Night: ");
                scanf("%f", &temp[i][j][k]);
            }
        }
    }

    printf("\nHighest Temperature per City:\n");
    for (i = 0; i < cities; i++) {
        max = temp[i][0][0];
        for (j = 0; j < days; j++) {
            for (k = 0; k < 3; k++) {
                if (temp[i][j][k] > max)
                    max = temp[i][j][k];
            }
        }
        printf("City %d: %.2f°C\n", i + 1, max);
    }

    return 0;
}
