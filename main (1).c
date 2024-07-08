#include <stdio.h>

int main() {
    unsigned int n; 
    int count = 0;

    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%u", &n); 

    if (n <= 1 || n >= 150) { 
        printf("Некоректне введення. Будь ласка, введіть число в межах 1 < n < 150.\n");
        return 1;
    }

    for (unsigned int m = 1; m <= n; m++) { 
        if (n % m == n / m) { 
            count++;  
        }
    }

    printf("Кількість рівних дільників числа %u: %d\n.", n, count); 

    return 0;
}