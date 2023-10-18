#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a nuber: ");
    scanf("%d", &a);
    printf("Input another value: ");
    scanf("%d", &b);
    int c = a * b;
    printf("The result is %d", c);
    return 0;
}