#include <stdio.h>
int main() {
    int mang[7] = {1, 2, 2, 3, 3, 6, 1}; 
    int n = 7;  
    int ptxhnh[n];  
    int count_max = 0;  
    int index = 0;  
    for (int i = 0; i < n; i++) 
    {
        int count = 0;  
        for (int j = 0; j < n; j++) 
        {
            if (mang[i] == mang[j]) 
            {
                count++;
            }
        }
        if (count > count_max) {
            count_max = count;
            index = 0; 
            ptxhnh[index++] = mang[i];  
        }else if (count == count_max)
        {
            int exists = 0;
            for (int k = 0; k < index; k++)  
            {
                if (ptxhnh[k] == mang[i]) 
                {
                    exists = 1;
                    break;
                }
            }
            if (exists != 1) 
            {
                ptxhnh[index++] = mang[i]; 
            }
        }
    }
    for (int i = 0; i < index; i++) {
        printf("%d ", ptxhnh[i]);
    }
    printf("\n");

    return 0;
}

