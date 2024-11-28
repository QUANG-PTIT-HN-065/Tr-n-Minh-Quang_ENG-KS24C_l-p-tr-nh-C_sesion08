#include<stdio.h>
int main(){
    int n = 0;
    do
    {
        printf("nhap vao kich thuoc mang<lon hon 0> : ");
        scanf("%d",&n);
    } while (n < 1);
    int numbers[n];
    printf("kich thuoc mang = %d\n",n);
    for ( int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {   
        while (1)
        {
        printf("nhap vao phan tu trong mang: ");
        scanf("%d",&numbers[i]);
        if (numbers[i] % 2 != 0)
        {
            break;
        }else
        {
            printf("phai nhap so le\n");
        }
        }
    }
}