#include <stdio.h>
int main(){
    int c, a, s;
    float avg;
    s = 0;
    for (c = 1; c<=10; c++)
    {
        printf("%d. Enter the number: ", c);
        scanf("%d", &a);
        printf("%d + %d = %d", s, a, s+a);
        s = s+a;
        printf("\n");
    }
    avg = s/10.00;
    printf("Total sum is %d\n", s);
    printf("Average is %.2f\n", avg);
}