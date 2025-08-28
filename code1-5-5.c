#include <stdio.h>

int main() {
    float celcius, fahrenheit;

    printf("masukkan suhu dalam celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("suhu dalam Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}