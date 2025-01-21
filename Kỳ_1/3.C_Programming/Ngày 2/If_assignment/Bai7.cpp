#include <stdio.h>

int main() {
    int ngay, thang, nam;
    printf("Nhap vao ngay, thang va nam: ");
    scanf("%d%d%d", &ngay, &thang, &nam);

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (1 <= ngay && ngay <= 31 && nam > 0) {
                printf("Hop le\n");
            } else {
                printf("Khong hop le\n");
            }
            break;

        case 4: case 6: case 9: case 11:
            if (1 <= ngay && ngay <= 30 && nam > 0) {
                printf("Hop le\n");
            } else {
                printf("Khong hop le\n");
            }
            break;

        case 2:
            if (1 <= ngay && ngay <= 28 && nam > 0) {
                printf("Hop le\n");
            } else if (ngay == 29 && nam > 0 && (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0))) {
                printf("Hop le\n");
            } else {
                printf("Khong hop le\n");
            }
            break;

        default:
            printf("Khong hop le\n");
            break;
    }

    return 0;
}

