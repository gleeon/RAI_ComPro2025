#include <stdio.h>

int main()
{
    int m[11], s, e =0, o = 0;
    for(s=1; s<11; s++){
        printf("Enter value %d: ", s);
        scanf("%d", &m[s-1]);
        switch(m[s-1]%2){
                case 0:
                    e++;
                    break;
                case 1:
                    o++;
                    break;
        }
    }
    printf("Even number: %d\n", e);
    printf("Odd number: %d\n", o);    
}