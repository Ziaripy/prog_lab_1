#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

long long countAnagrams(char word[]) {
    int length = strlen(word);

    int count[26] = { 0 };

    for (int i = 0; i < length; i++) {
        int index = word[i] - 'A';  
        count[index]++;
    }

    long long totalAnagrams = factorial(length);
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            totalAnagrams /= factorial(count[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);

    long long anagramCount = countAnagrams(word);
    printf("Кількість можливих анаграм: %lld\n", anagramCount);

    return 0;
}
