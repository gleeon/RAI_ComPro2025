#include <stdio.h>

int main()
{
    int m[6], o, t = 0, h = 0;
    for(o=1; o<6; o++){
        printf("Enter the mark of student %d: ", o);
        scanf("%d", &m[o-1]);
        t = t+m[o-1];
        if (m[o-1]>h){
            h = m[o-1];
        }
    }
    printf("Total Mark : %d\n", t);
    printf("Highest Mark : %d\n", h);
}