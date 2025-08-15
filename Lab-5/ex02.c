#include <stdio.h>

int main()
{
    int original[10] = {1,2,3,4,5,6,7,8,9};
    int rev[10];
    int v = 9,s;
    for(s=0; s<10; s++){
        rev[s]=original[v-s];
    }
    printf("Reversed Array: ");
    for(s=1; s<10; s++){
        printf("%d ", rev[s]);
    }
    printf("\n");
}