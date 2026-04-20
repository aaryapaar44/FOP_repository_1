#include <stdio.h>

void addition() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &a[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &b[i][j]);
    printf("Sum of Matrices:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint() {
    int n, i, j, k, min_row, col_ind, is_saddle;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &a[i][j]);

    for(i=0; i<n; i++) {
        min_row = a[i][0];
        col_ind = 0;
        for(j=1; j<n; j++) {
            if(a[i][j] < min_row) {
                min_row = a[i][j];
                col_ind = j;
            }
        }
        is_saddle = 1;
        for(k=0; k<n; k++) {
            if(a[k][col_ind] > min_row) {
                is_saddle = 0;
                break;
            }
        }
        if(is_saddle) {
            printf("Saddle Point found at (%d, %d): %d\n", i, col_ind, min_row);
            return;
        }
    }
    printf("No Saddle Point found.\n");
}

void inverse() {
    int a[2][2];
    float det;
    printf("Enter elements of 2x2 matrix:\n");
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%d", &a[i][j]);
    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    if(det == 0) printf("Inverse does not exist (Det=0).\n");
    else {
        printf("Inverse Matrix:\n");
        printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
        printf("%.2f %.2f\n", -a[1][0]/det, a[0][0]/det);
    }
}

void magicSquare() {
    int n, i, j, sumd1=0, sumd2=0, row_sum, col_sum;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &a[i][j]);

    for(i=0; i<n; i++) {
        sumd1 += a[i][i];
        sumd2 += a[i][n-1-i];
    }
    if(sumd1 != sumd2) { printf("Not a Magic Square.\n"); return; }

    for(i=0; i<n; i++) {
        row_sum = 0; col_sum = 0;
        for(j=0; j<n; j++) {
            row_sum += a[i][j];
            col_sum += a[j][i];
        }
        if(row_sum != sumd1 || col_sum != sumd1) {
            printf("Not a Magic Square.\n");
            return;
        }
    }
    printf("It is a Magic Square.\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Addition 2.Saddle 3.Inverse(2x2) 4.MagicSquare 5.Exit: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addition(); break;
            case 2: saddlePoint(); break;
            case 3: inverse(); break;
            case 4: magicSquare(); break;
            case 5: return 0;
        }
    }
}