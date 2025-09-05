#include<stdio.h>
#include<math.h>

int main(){
    struct coor{
        float x, y;
    } c[2];
    for(int i = 0; i<2; i++){
        printf("x%d: ", i+1);
        scanf("%f", &c[i].x);

        printf("y%d: ", i+1);
        scanf("%f", &c[i].y);

    }

    float d = sqrt(pow((c[0].x-c[1].x), 2)+(pow((c[0].y-c[1].y), 2)));

    printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.3f units\n", c[0].x, c[0].y, c[1].x, c[1].y, d);

}