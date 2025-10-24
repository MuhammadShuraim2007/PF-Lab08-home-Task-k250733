#include <stdio.h>

int main()
{
    int floors, rooms, beds;
    int i, j, k;
    int building[10][10][10];
    int emptyCount = 0;

    printf("Enter number of floors: ");
    scanf("%d", &floors);

    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);

    printf("Enter number of beds per room: ");
    scanf("%d", &beds);

    printf("\nEnter bed status (1 = occupied, 0 = empty):\n\n");

    for (i = 0; i < floors; i++) {
        printf("---- Floor %d ----\n", i + 1);
        for (j = 0; j < rooms; j++) {
            printf("Room %d:\n", j + 1);
            for (k = 0; k < beds; k++) {
                printf("  Bed %d: ", k + 1);
                scanf("%d", &building[i][j][k]);
                if (building[i][j][k] == 0)
                    emptyCount++;
            }
        }
    }

    printf("Total Empty Beds: %d\n", emptyCount);

    return 0;
}
