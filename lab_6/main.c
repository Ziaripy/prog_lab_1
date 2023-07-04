#include <stdio.h>
#include <math.h>
//приймаЇ координати початку вектора та  к≥нц€ вектора ≥ обчислюЇ довжину вектора
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main() {
    int x1, y1, x2, y2;
    //водимо дан≥ кординат
    printf("¬вед≥ть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("¬вед≥ть координати к≥нц€ вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    //обчисленн€ довжини вектора
    double vectorLength = calculateVectorLength(x1, y1, x2, y2);
    //резулбтат з точн≥стю до шести знак≥в
    printf("ƒовжина вектора: %.6f\n", vectorLength);

    return 0;
}