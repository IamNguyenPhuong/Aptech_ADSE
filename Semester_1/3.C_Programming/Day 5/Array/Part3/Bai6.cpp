#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of teams: ");
    scanf("%d", &n);

    int a[n][n];            // ma tr?n k?t qu? tr?n d?u
    int score[n];           // t?ng di?m c?a m?i d?i
    // Kh?i t?o t?ng di?m ban d?u b?ng 0 cho m?i d?i
    for (int i = 0; i < n; i++) {
        score[i] = 0;
    }

    // Thi?t l?p ma tr?n trên du?ng chéo (t? d?u không xu?t hi?n th?c s?)
    for (int i = 0; i < n; i++) {
        a[i][i] = 0;  // ho?c giá tr? m?c d?nh nào dó
    }

    // Nh?p k?t qu? các tr?n d?u: ch? duy?t qua các c?p (i, j) v?i i < j
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int result;
            printf("Enter result for match between Team %d and Team %d\n", i, j);
            printf("(Enter 3 if Team %d wins, 1 if draw, or 0 if Team %d wins): ", i, i);
            scanf("%d", &result);
            
            // Ki?m tra input h?p l?: ch? cho phép 0,1,3
            while (result != 3 && result != 1 && result != 0) {
                printf("Invalid input. Please enter again (3 for Team %d win, 1 for draw, 0 for Team %d win): ", i, i);
                scanf("%d", &result);
            }
            
            if(result == 3) {
                // Ð?i i th?ng, d?i j thua
                a[i][j] = 3;
                a[j][i] = 0;
            } else if(result == 0) {
                // Ð?i i thua, d?i j th?ng
                a[i][j] = 0;
                a[j][i] = 3;
            } else {
                // Hòa
                a[i][j] = 1;
                a[j][i] = 1;
            }
            
            // C?p nh?t di?m cho 2 d?i
            score[i] += a[i][j];
            score[j] += a[j][i];
        }
    }
    
    // In b?ng k?t qu?
    printf("\n--- Results Table ---\n");
    for (int i = 0; i < n; i++) {
        printf("Team %d: Score = %d\n", i, score[i]);
    }
    
    // Tìm d?i th?ng (di?m cao nh?t)
    int winner = 0;
    for (int i = 1; i < n; i++) {
        if(score[i] > score[winner])
            winner = i;
    }
    printf("\nWinner is Team %d with %d points.\n", winner, score[winner]);
    
    return 0;
}

