#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int factorial(int n) { 
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int countAnagrams(char word[]) { 
    int len = strlen(word); 
    int frequency[26] = {0}; 
    int totalAnagrams = factorial(len); 
    for (int i = 0; i < len; i++) { 
        char c = toupper(word[i]); 
        frequency[c - 'A']++; 
    }
    for (int i = 0; i < 26; i++) { 
        if (frequency[i] > 1) { 
            totalAnagrams /= factorial(frequency[i]); 
        }
    }
    return totalAnagrams; 
}
int main() {
    char word[15]; 
    printf("Введіть слово: ");
    scanf("%s", word); 
    int anagramCount = countAnagrams(word); 
    printf("Кількість анаграм: %d\n", anagramCount); 
    return 0;
}