#include <stdio.h>

int main()
{
    int value[11],v;
    for(v=1; v<11; v++){
        printf("Enter the value %d here: ", v);
        scanf("%d", &value [v]);
    }
    printf("Values in array are : ");
    for(v=1; v<11; v++){
        printf("%d ", value[v]);
    }
    printf("\n");
}
