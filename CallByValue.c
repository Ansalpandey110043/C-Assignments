//Call by value 
#include <stdio.h>
int main() {
    void swap(int, int);
    int x = 12, y = 8;
    swap(x,y);
    printf("x = %d y = %d", x, y);
    return 0;
}
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}