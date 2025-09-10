#include <stdio.h>

int main(){
     float number;

    // one decimal
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // 3 decimal places
    printf("Number with 3 decimal places: %.3f\n", number);

    // with 6 decimal places
    printf("Number with 6 decimal places: %.6f\n", number);
    return 0;
}