#include <stdio.h>

int main() {
    int mang[3][3] = {{1, 2, 3},{4, 5, 6}};
    int max = 0;
    printf("Gia tri lon nhat cua mang hai chieu:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mang[i][j]> max)
            {
                max = mang[i][j];
            }
            
        }
    }
     printf("%d",max);
    return 0;
}
