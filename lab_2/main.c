#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int r;
    printf("Введіть кількість чисел р: ");
    scanf("%d", &r);
   
    int numbers[r];
    printf("Введіть %d натуральних чисел, розділених пробілом: ", r);
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
     
    for (int i = 1; i < r; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}
