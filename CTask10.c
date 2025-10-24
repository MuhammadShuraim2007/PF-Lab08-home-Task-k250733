#include <stdio.h>

int main() {
    int wards = 2, patients = 3, vitalsigns = 3;
    int vitals[2][3][3] = {
        { {80, 98, 100}, {76, 99, 115}, {90, 97, 110} },
        { {70, 100, 105}, {88, 104, 98}, {85, 99, 112} }
    };

    for (int w = 0; w < wards; w++) {
        printf("\n--- Ward %d ---\n", w + 1);

        // Row sum (per patient)
        printf("Total of each patient:\n");
        for (int i = 0; i < patients; i++) {
            int rowSum = 0;
            for (int j = 0; j < vitalsigns; j++)
                rowSum += vitals[w][i][j];
            printf("Patient %d = %d\n", i + 1, rowSum);
        }

        // Column sum (per vital sign)
        printf("\nTotal of each vital sign:\n");
        for (int j = 0; j < vitalsigns; j++) {
            int colSum = 0;
            for (int i = 0; i < patients; i++)
                colSum += vitals[w][i][j];
            printf("Vital %d = %d\n", j + 1, colSum);
        }

        printf("\n");
    }

    return 0;
}
