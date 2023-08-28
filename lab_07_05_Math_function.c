#include <stdio.h>
#include <math.h>

double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);
double getValue();

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    for (int i=0; i<n; ++i) {
        array[i] = getValue();
    }
    
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf\n", avg);
    return 0;
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double check = array[0];
    for (int i=0; i<size; i++) {
        if (array[i]<=check) {
            check = array[i];
        }
    }
    return check;
}
double findMax(double array[], int size) {
    double check = array[0];
    for (int i=0; i<size; i++) {
        if (array[i]>=check) {
            check = array[i];
        }
    }
    return check;
}
double findAvg(double array[], int size) {
    double total=0;
    for (int i=0; i<size; i++) {
        total += array[i];
    }
    return total/size;
}
