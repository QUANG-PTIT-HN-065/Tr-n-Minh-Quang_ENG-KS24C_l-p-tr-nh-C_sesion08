#include <stdio.h>
int main() {
    int mang[] = {1, 2, 3, 4, 5, 6};
    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = 6; i >= 0; i--) {
        printf("%d\n", mang[i]);
    }

    return 0;
}
