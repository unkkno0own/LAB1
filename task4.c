#include <stdio.h>

int main() {
    int intNum;
    float floatNum, sum;

    printf("Введіть ціле число: ");
    scanf("%d", &intNum);
    
    printf("Введіть дробове число: ");
    scanf("%f", &floatNum);

    sum = intNum + floatNum;
    printf("Сума: %.2f\n", sum);

    return 0;
}
