#include<stdio.h>

int main()
{
    int a, b, c, mi, ma, s;
    float avgs;
    printf("Enter integer #1:");
    scanf("%d", &a);
    printf("Enter integer #2:");
    scanf("%d", &b);
    printf("Enter integer #3:");
    scanf("%d", &c);

    if (a<b && a<c){
        mi = a;
    }
    else if(b<a && b<c){
        mi = b;
    }
    else{
        mi = c;
    }

    if (a>b && a>c){
        ma = a;
    }
    else if(b>a && b>c){
        ma = b;
    }
    else{
        ma = c;
    }

    s = a+b+c;
    avgs = s/3.0;

    printf("Results: \n");
    printf("Minimum: %d\n", mi);
    printf("Maximum: %d\n", ma);
    printf("Sum: %d\n", s);
    printf("Average: %.2f\n", avgs);
}