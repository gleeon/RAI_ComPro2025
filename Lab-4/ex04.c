#include <stdio.h>
int main(){
    int i, f;
    printf("Enter a Number : ");
    scanf("%d", &f);
    printf("Multiplication Table for %d\n",f);
    for (i=1; i<=12; i++){
        printf("%d x %d = %d \n", f,i, i*f);
    }
    return 0;
}