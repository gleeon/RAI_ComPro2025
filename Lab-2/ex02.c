#include<stdio.h>

int main()
{
    int tmin, h, min;
    printf("Enter total minutes: ");
    scanf("%d", &tmin);
    h = tmin/60;
    min = tmin%60;
    printf("%d minutes is %d hour(s) and %d minutes\n", tmin, h, min);
}