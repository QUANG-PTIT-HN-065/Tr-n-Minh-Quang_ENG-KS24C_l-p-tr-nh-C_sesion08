#include <stdio.h>
int main() {
    int mang[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    int n = 4; 
    int tong = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("%4d",mang[i][j]);
            if (i + j == n - 1)
            {
                tong += mang[i][j];
            }
        }
        printf("\n");
    }
    printf("Tong cac phan tu tren duong cheo phu cua ma tran la: %d\n", tong);

    return 0;
}
