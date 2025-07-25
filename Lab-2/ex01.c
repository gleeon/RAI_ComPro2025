#include<stdio.h>

int main()
{
    int iv;
    float fv;
    char chv[20];

    printf("Please enter an integer value: ");
    scanf("%d", &iv);
    printf("You entered %d\n", iv);
    printf("Please enter a float value: ");
    scanf("%f", &fv);
    printf("You entered %.1f\n", fv);
    printf("Please enter a character: ");
    scanf("%s", chv);
    printf("You entered %s\n", chv);
}