#include<stdio.h>

int main()
{
    char n[20], g[20], e[20], ee[20];
    int a, w;
    float h;
    printf("Enter your Name: ");
    scanf("%s", n);
    printf("Enter your Age: ");
    scanf("%d", &a);
    printf("Enter your Height: ");
    scanf("%f", &h);
    printf("Enter your Weight: ");
    scanf("%d", &w);
    printf("Enter your Gender: ");
    scanf("%s", g);
    printf("Enter your Education Qualification: ");
    scanf("%s %s", e,ee);
    
    printf("Name: %s\n", n);
    printf("Age: %d\n", a);
    printf("Gender: %s\n", g);
    printf("Height: %.1f\n", h);
    printf("Weight: %d\n", w);
    printf("Education: %s %s\n", e, ee);
}