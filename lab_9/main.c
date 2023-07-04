#include <stdio.h>

int compute_min_steps(int x, int y) {
    if (x == y) {
        return 0;  // ���� ������� � ������, ���� x = y
    }
    else if (y - x <= 2) {
        return y - x;  // ʳ������ ����� ������� ������ �� x �� y
    }
    else {
        int steps = 2;  // ����� ��� ����� (x+1 �� y-1)
        int current = x + 2;  // ������� �������

        while (current < y) {
            steps++;  // �������� �������� �����
            current += steps % 2 == 0 ? steps : steps - 1;  // ���������� �������� �������
        }

        return steps;
    }
}

int main() {
    int x, y;

    // ������� �������� x �� y � ���������
    printf("������ �������� x: ");
    scanf("%d", &x);

    printf("������ �������� y: ");
    scanf("%d", &y);

    // ���������� ����� ���
    if (x >= 0 && y >= 0 && x <= y && y < (1 << 31)) {
        printf("��������� ����� ���\n");
        return 0;
    }

    // ���������� �������� ������� �����
    int min_steps = compute_min_steps(x, y);

    // �������� ���������
    printf("̳������� ������� �����: %d\n", min_steps);

    return 0;
}