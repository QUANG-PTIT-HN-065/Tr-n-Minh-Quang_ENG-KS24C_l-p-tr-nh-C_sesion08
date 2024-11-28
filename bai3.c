#include<stdio.h>
int main(){
    int n,i,j;
    do
    {
        printf("hay nhap vao so nguye lon hon 1: ");
        scanf("%d",&n);
    } while (n < 2);
    int numbers[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            numbers[i][j] = n;
            printf("%2d",numbers[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}