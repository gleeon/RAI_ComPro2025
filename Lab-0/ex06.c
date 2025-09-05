#include<stdio.h>

int main(){
    int i;
    struct pro{
        char name[50];
        int age;
    }s[10];
    for(i=1; i<=10; i++){
        printf("Enter student %d name:", i);
        scanf("%s", s[i].name);

        printf("Enter student %d age:", i);
        scanf("%d", &s[i].age);
    }
    for(i=1; i<=10; i++){
        if(s[i].age>20){
            printf("\n%s, %d", s[i].name, s[i].age);
        }
    }
}