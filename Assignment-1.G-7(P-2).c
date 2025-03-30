//problem 2
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
