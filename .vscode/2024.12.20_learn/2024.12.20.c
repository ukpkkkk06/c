#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5};
    int* p = &a[5];
    int* q = &a[1];
printf("%d\n", p - q); // 4
printf("%d\n", q - p); // -4
}