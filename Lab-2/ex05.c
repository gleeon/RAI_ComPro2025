#include<stdio.h>

int main()
{
    char n[30], s[30], u[20];
    int a;
    float h;

    printf("Enter your full name: ");
    scanf("%s %s", n, s);

    printf("Enter your age: ");
    scanf("%d", &a);

    printf("Enter your height: ");
    scanf("%f", &h);
    
    printf("Enter your University name: ");
    scanf("%s", u);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall\n", s[0], n, u, a, h);
}