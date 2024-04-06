#include <stdio.h>

int main() {
    float chieudai, chieurong, chuvi, dientich;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieudai);

    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieurong);

    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;

    printf("Chu vi hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f\n", chieudai, chieurong, chuvi);
    printf("Dien tich hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f", chieudai, chieurong, dientich);

    return 0;
}
