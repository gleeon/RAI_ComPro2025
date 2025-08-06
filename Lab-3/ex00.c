#include <stdio.h>
int main(){
    int num1, num2, result, menu;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculator Menu : \n 1. +\n 2. -\n 3. *\n 4. /\n 5. %");
    printf("Choose menu: ");
    scanf("%d", &menu);
    switch(menu){
        case 1 :
            result = num1 + num2;
            break;
        case 2 :
            result = num1 - num2;
            break;
        case 3 :
            result = num1*num2;
            break;
        case 4 :
            result = num1/num2;
            break;
        case 5 :
            result = num1%num2;
            break;
    }
    printf("Ans : Num 1 + Num 2 = %d", result);
}
/*
#include <stdio.h>
int main(){
    int num1;
    int num2;
    int menu;
    int result;


    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);
    printf("Calculator menu:\n1. +\n2. -\n3. *\n4. /\n5. %% \n Choose menu: ");
    scanf("%d", &menu);
  


    //Menu
    if(menu == 1){
        result = num1 + num2;
        printf("%d + %d = %d",num1,num2,result);
    }
    
    if(menu == 2){
        result = num1 - num2;
        printf("%d - %d = %d",num1,num2,result);
    }
    if(menu == 3){
        result = num1 * num2;
        printf("%d * %d = %d",num1,num2,result);
    }
    if(menu == 4){
        result = num1 / num2;
        printf("%d / %d = %d",num1,num2,result);
    }
    if(menu == 5){
        result = num1 + num2;
        printf("%d % %d = %d",num1,num2,result);
    }
}

*/