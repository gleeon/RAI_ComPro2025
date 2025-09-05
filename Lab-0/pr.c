#include <stdio.h>
int main()
{
    // int x = 0, i, j ,k;
    // for(i=1; i<=5; i+=3){
    //     for(j=1; j<= 5; j+=2){
    //         for(k=1; k<=5; k++){
    //             x=x+2;
    //         }
    //     }
    // }
    // printf("%d\n", x);

    // int i, sum=0;
    // for(i=1; i<10; i+=2){
    //     sum+=i;
    // }
    // if(sum%2==0){
    //     printf("%d", sum);
    // }
    // else{
    //     printf("%d", i);
    // }

    // int i, j;
    // for(i=1; i<5; i++){
    //     for(j=1; j<5; j++){
    //         if(j<i){
    //             printf("*");
    //         }
    //     }
    // }

    int i, j, sum=0;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            if(j<i){
                sum += j;

            }
        }
    }
    printf("%d", sum+10);
}