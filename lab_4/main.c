#include <stdio.h>

int countDivisors(int n) {
    int count = 0;

    // ������ ��� �������� ������� �� 1 �� n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("�������: ���������� ����� n �� ����������� ����� 1 < n < 150.\n");
        return 1;
    }

    int divisors = countDivisors(n);
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, divisors);

    return 0;
}