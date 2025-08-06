#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter a number : ");
    scanf("%d", &n1);
    printf("Enter a number : ");
    scanf("%d", &n2);
    if (n1==n2){
        printf("Match\n");
    } else {
        printf("Does not match. Try again\n");
    }
}