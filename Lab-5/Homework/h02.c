#include <stdio.h>

int main()
{
    int A[3][3],r,c;
    int B[3][3] = {1,0,-1,
                    -1,2,3,
                    2,4,5};
    for(r=0; r<3; r++){
        for(c=0; c<3; c++){
            A[r][c] = B[c][r];
        }
    }
    for(r=0; r<3; r++){
        for(c=0; c<3; c++){
            printf("%5d", A[r][c]);
        }
        printf("\n");
    }
}