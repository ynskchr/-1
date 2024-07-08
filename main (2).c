#include <stdio.h>
#include <math.h> 
int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) { 
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    if (distance == 0 && r1 == r2) { 
        return -1;  
    }
    if (distance > r1 + r2 || distance < fabs(r1 - r2)) { 
        return 0;  
    }
    if (distance < r1 + r2 && distance > fabs(r1 - r2)) { 
        return 2;  
    }
    return 1;  
}
int main() {
    int x1, y1, r1, x2, y2, r2; 
    printf("Введіть координати та радіуси двох кіл (х, у, r): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2); 
    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2); 
    printf("Кількість точок перетину: %d\n", intersectionPoints); 
    return 0;
}