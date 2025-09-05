#include<stdio.h>

int main(){
    struct t{
        int min, sec;
    } t[3];

    int tt, s;

    for(int i = 0; i<3; i++){
        printf("%d Time input (m:s): ", i+1);
        scanf("%d:%d", &t[i].min, &t[i].sec);

        tt += t[i].min*60 +t[i].sec;
    }

    printf("Total time elased: %d second(s)\n", tt);
}