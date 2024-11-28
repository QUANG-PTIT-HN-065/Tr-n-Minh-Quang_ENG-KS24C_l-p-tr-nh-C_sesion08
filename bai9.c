#include <stdio.h>
int main() {
    // bước 1 khai bao bien mảng, cont,count max,ptxhnt
    int mang[] = {1, 2, 1, 4, 5, 6,1};
   int count,ptxhnh;
   int count_max = 0;
   //bước 2 duyệt từng phần tử nếu phân tử đó lặp lại thì tăng cont++
    for (int i = 0; i < sizeof(mang)/sizeof(int); i++) 
    {
        count = 0;
        for (int j = 0; j < sizeof(mang)/sizeof(int); j++)
        {
            if (mang[i]==mang[j])
            {
                count++;
            }
            
        }
        if (count > count_max)
        {
            count_max = count;
            ptxhnh = mang[i];
        }
    }
    // bươc 3 in ra màn hình
     printf("Phan tu xuat hien nhieu nhat la: %d\n",ptxhnh);
    printf("So lan xuat hien: %d\n", count_max);
    return 0;
}