#include <stdio.h>

int main()
{
    int m[9], c, s=1000, l=0;
    for(c=1; c<9; c++){
        printf("Enter number %d: ", c);
        scanf("%d", &m[c-1]);
        if(m[c-1]<s){
            s = m[c-1];
        }
        if(m[c-1]>l){
            l = m[c-1];
        }
    }
    printf("Smallest number: %d\n", s);
    printf("Largest number: %d\n", l);
}