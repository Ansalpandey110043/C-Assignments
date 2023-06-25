//Average Array
#include <stdio.h>

float Average(int arr[], int size)  {
    int sum = 0;
    
    for(int i = 0; i < size; i++)   {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main()  {
    int arr[6] = {22.36, 63.69, 69.69, 25.36, 74.69 , 89.63};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    float avg = Average(arr, size);
    
    printf("Average of the array is: %.2f", avg);
    
    return 0;
}