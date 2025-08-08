#include <stdio.h>
int main(){
    int c, a, s;
    c = 1;
    s = 0;
    while (c<=10)
    {
        printf("%d. Enter the number: ", c);
        scanf("%d", &a);
        s = s+a;
        c++;
    }
    printf("Total sum is %d\n", s);
}