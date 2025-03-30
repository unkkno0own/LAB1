#include <stdio.h>

int main() {
    char ch;
    
    printf("Введіть символ: ");
    scanf(" %c", &ch); // Пробіл перед %c для коректного зчитування
    
    printf("Наступний символ: %c\n", ch + 1);

    return 0;
}
