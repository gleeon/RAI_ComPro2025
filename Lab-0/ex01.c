#include <stdio.h>
int main()
{
    /*
    char name[6] = "KMITL";
    printf("%s\n", name);
    printf("%s\n", name);
    printf("%s\n", name);
    printf("%s\n", name);
    printf("%s\n", name);
    */

    /*
    float point;
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter your point: ");
    scanf("%f",&point);
    
    printf("Name : %s\nPoint : %0.3f\n", name, point);
    */

    /*
    char first[20], last[20];
    printf("Enter your name and surname : ");
    scanf("%[^\n]", first);

    printf("Hi %s", first);
    */

    /*
    char a = 10;
    printf("%d", 10*2*3-10/7);
    printf("%d", 10*2*(3-10)/7);
    printf("%d", 10*2>2+3);
    printf("%d", 10*2<2+3);
    */
    char nm[20];
    float ps, ds,phs, avgs;
    printf("Enter your name: ");
    scanf("%[^\n]", nm);

    printf("Enter your Programming score: ");
    scanf("%f\n", &ps);

    printf("Enter your Drawing score: \n");
    scanf("%f", &ds);

    printf("Enter your Physics score: \n");
    scanf("%f", &phs);

    avgs = (ps+ds+phs)/3;

    printf("**SHOW**\n");
    printf("Name : %s\n", nm);
    printf("Average score : %.2f\n", avgs);


    return 0;

}