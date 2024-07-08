#include <stdio.h>
#include <stdlib.h>
int minSteps(int x, int y) {
    int steps = 0;  
    int diff = y - x; 
    int sign = (diff >= 0) ? 1 : -1;  
    diff = abs(diff);  
    int k = 1; 
    int count = 0; 
    while (diff > 0) { 
        diff -= k; 
        count++; 
        if (count == 2) { 
            k++; 
            count = 0;  
        }
        steps++; 
    }
    return steps; 
}
int main() {
    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x); 
    printf("Введіть значення y: ");
    scanf("%d", &y); 
    int steps = minSteps(x, y); 
    printf("Мінімальна кількість кроків для переходу від %d до %d: %d\n", x, y, steps); 
    return 0;
}