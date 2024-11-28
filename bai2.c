#include <stdio.h>
int main() {
    int mang[6] = {1, 2, 3, 4, 5, 6};
    int n;
    int a = 0;
    printf("Cac hay nhap mot phan tu bat ky");
    scanf("%d",&n);
    for (int i = 0 ; i < 6; ++i) {
        if (mang[i] == n)
        {
            printf("phan tu %d co trong mang",n); 
            a = 1;
        }
    }
     if (a == 0)
     {
        printf("phan tu %d ko trong mang",n);
     }
     
    return 0;
}
