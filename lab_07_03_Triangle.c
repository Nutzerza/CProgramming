#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c);
double area(double a, double b);

int main() {
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("Perimeter: %.2lf\n", perimeter(a, b, sqrt(pow(a, 2)+pow(b, 2))));
    printf("Area: %.2lf\n", area(a, b));
    return 0;
}

double perimeter(double a, double b, double c) {
    return a+b+c;
}

double area(double a, double b) {
    return 0.5 * a * b;
}