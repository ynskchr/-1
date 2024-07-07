

int countNumbers(int n) {
    if (n == 1) {
        return 2; 
    } else if (n == 2) {
        return 3; 
    } else {
        
        return 1 << (n - 1); 
    }
}

int main() {
    int r;
    printf("Введіть кількість розрядів (р): ");
    scanf("%d", &r); 

    int result = countNumbers(r);
    printf("Кількість чисел із %d розрядів: %d\n", r, result); 

    return 0;
}