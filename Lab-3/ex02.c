#include <stdio.h>
int main(){
    int num, n;
    printf("Enter a number : ");
    scanf("%d", &num);
    n =num%2;
    if(num>100){
        printf("%d is out of range\n", num);
    }
    else {
        if (n==0){
            printf("%d is even\n", num);
        }
        else {
            printf("%d is odd\n", num);
        }
    }
}