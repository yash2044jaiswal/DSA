#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    printf("Enter number of rows and columns of matrices: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of FIRST matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of SECOND matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrices
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix after Addition:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix addition completed successfully.\n");

    return 0;
}
