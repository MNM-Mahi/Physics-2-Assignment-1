//Problem 1
#include <stdio.h>
#include <math.h>

const char* getColor(double w) {

    const char* colors[] = {"Violet", "Blue", "Cyan", "Green", "Yellow", "Orange", "Red"};

    int ranges[] = {450, 485, 500, 565, 590, 625, 750};

    for (int i = 0; i < 7; i++) {
        if (w < ranges[i])
            return colors[i];
        }

    return "Out of range";

}

int main() {

    double m, theta, d;

    printf("Enter m, theta (degrees), d (micrometers): ");

    scanf("%lf %lf %lf", &m, &theta, &d);

    double w = (d * 1e-6 * sin(theta * M_PI / 180)) / m * 1e9;

    printf("\nWavelength: %.2f nm\nColor: %s\n", w, getColor(w));

    return 0;

}
