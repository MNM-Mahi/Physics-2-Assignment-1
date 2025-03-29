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

//Problem 2
#include <stdio.h>
#include <math.h>

int main() {

    double m_green = 3, lambda_green = 530e-9, theta_green = 65.0;

    double m_red = 2, lambda_red = 700e-9;

    double d = (m_green * lambda_green) / sin(theta_green * M_PI / 180);

    double theta_red = asin((m_red * lambda_red) / d) * 180 / M_PI;

    printf("Angle for red light (700 nm, m=2): %.2f degrees\n", theta_red);

    return 0;

}
