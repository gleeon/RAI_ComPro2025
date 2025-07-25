#include<stdio.h>

int main()
{
    char n[20], sid[20];
    float ps, ph, ca, avgs;

    printf("Enter your name: ");
    scanf("%s", n);

    printf("Enter your student ID: ");
    scanf("%s", sid);

    printf("Enter your Programming score: ");
    scanf("%f", &ps);

    printf("Enter your Physics score: ");
    scanf("%f", &ph);

    printf("Enter your Calculus score: ");
    scanf("%f", &ca);

    avgs = (ps+ph+ca)/3;
    printf("Hi %s(%s)!Your GPA is %.2f\n", n, sid, avgs);

}