#include <stdio.h>
int main(){
    /*
    char name[10] = "Onsini S.";
    int c;
    for (c=0; c<10; c++){
        printf("%s\n", name);
    }
    */
    /*
    int c, s, f;
    printf("input final : ");
    scanf("%d", &f);
    for(c = 1; c<=f; c++){
        if(c%2==1)
            s = s + c;
    }
        printf("%d\n",s);
    */

    /*
    int i, f;
    printf("Input Number : ");
    scanf("%d", &f);
    printf("Multiplication Table of 2\n");
    for (i=1; i<=12; i++){
        printf("2 * %d \n", i,i*2);
    }
    printf("2*%d = %d \n", f, f*2);
    return 0;
    */
    /*
    int i, j;
    for (i=0; i<3; j++){ //row
        for (j=0; j<3; j++){ //coloumn
            printf(" * ");
        }
    }
    */

    int n, i, j;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Output\n");
    for (i=1; i<=n; i++){
        printf("\n");
        j = 1;
        for(j=1; j<=n; j++){
            if((i==1)||(i==n)||(j==1)||(j==n)){
                printf("*");
            }
        else{
            printf(" ");

        }
        }
    }
        printf("\n");
}
