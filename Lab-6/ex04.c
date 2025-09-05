#include<stdio.h>

int main(){
    struct Vector{
        float x, y;
    } v[2];

    for(int i = 0; i<2; i++){
        printf("Vector %d, x: ", i+1);
        scanf("%f", &v[i].x);

        printf("Vector %d, y: ", i+1);
        scanf("%f", &v[i].y);
    }

    float rx = v[0].x + v[1].x;
    float ry = v[0].y + v[1].y;

    printf("Resultant vector is equivalnece to %.2fi + %.2fj\n", rx, ry);
}