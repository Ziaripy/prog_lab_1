#include <stdio.h>

long long countNumbers(int n) {
    if (n == 1) return 2; // ��� ������������� ����� � 2 ������ ����� (5 ��� 9)

    long long dp[n + 1][2];
    dp[1][0] = 1; // ���� ������ - �� 5
    dp[1][1] = 1; // ���� ������ - �� 9

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1]; // ������� ������ 5
        dp[i][1] = dp[i - 1][0] + dp[i - 1][1]; // ������� ������ 9 ��� 5
    }

    return dp[n][0] + dp[n][1];
}

int main() {
    int n;
    printf("������ ������� ������� n: ");
    scanf("%d", &n);

    long long result = countNumbers(n);
    printf("ʳ������ ����� �� %d �������: %lld\n", n, result - 1);

    return 0;
}