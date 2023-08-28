#include <stdio.h>
#include <math.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    double n;
    char temp;
    scanf("%lf %c", &n, &temp);
    if (temp=='c' || temp=='C') {
        printFarenheit(celsiusToFahrenheit(n));
    }
    if (temp=='f' || temp=='F') {
        printCelcius(fahrenheitToCelcius(n));
    }
    return 0;
}

double celsiusToFahrenheit(double celcius) {
    return 32 + (celcius*(180.0/100.0));
}
double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit-32)*(100.0/180.0);
}
void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}
