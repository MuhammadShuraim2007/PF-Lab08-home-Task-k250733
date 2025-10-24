#include <stdio.h>

int main() {
    int rows = 2, cols = 3; // Example image: 2x3 pixels
    int image[2][3][3] = {
        {{255, 0, 0}, {0, 255, 255}, {0, 0, 255}}, // Row 1 (Red, Green, Blue)
        {{255, 255, 0}, {0, 255, 255}, {255, 255, 255}} // Row 2 (Yellow, Cyan, Magenta)
    };

    int rSum = 0, gSum = 0, bSum = 0;
    int totalPixels = rows * cols;

    // Calculate total for each color
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rSum += image[i][j][0];
            gSum += image[i][j][1];
            bSum += image[i][j][2];
        }
    }

    // Compute average color intensity
    float avgR = (float)rSum / (float)totalPixels;
    float avgG = (float)gSum / (float)totalPixels;
    float avgB = (float)bSum / (float)totalPixels;
    float avgIntensity = (avgR + avgG + avgB) / 3;

    printf("Average Red Intensity: %.2f\n", avgR);
    printf("Average Green Intensity: %.2f\n", avgG);
    printf("Average Blue Intensity: %.2f\n", avgB);
    printf("Overall Average Color Intensity: %.2f\n", avgIntensity);

    return 0;
}
