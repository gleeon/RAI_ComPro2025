#include <stdio.h>
int main(){
    int i, f, c;
    printf("Enter a number: ");
    scanf("%d", &i);
    f=1;
    for (c = 1; c<= i; c++){
        f = f*c;
    }
    printf("Factorial of %d is %d\n", i,f);

}