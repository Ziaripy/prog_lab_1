#include <stdio.h>

int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 2; // ��������� ������� ������������� �������� 0 - '0' � '1'
    dp[1] = 3; // ��������� ������� ������������� �������� 1 - '00', '01', '10'

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345; // ���������� ������� �������������
    }

    return dp[n];
}

int main() {
    int n;
    printf("������ ������� ����������� n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("ʳ������ ������� �������������: %d\n", result);

    return 0;
}