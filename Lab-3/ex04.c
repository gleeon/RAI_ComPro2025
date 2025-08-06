#include <stdio.h>
int main(){
    int cs, ps, sc;
    float a;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your Calculus score: ");
    scanf("%d", &cs);

    printf("Enter your Physics score: ");
    scanf("%d", &ps);

    printf("Enter your Science score: ");
    scanf("%d", &sc);

    a = (cs+ps+sc)/3.00;

    if (a>=80){
    printf("%s, your average is %.2f. You got grade A\n", name, a);
    }
    else if ("a<=80 and a >= 70"){
    printf("%s, your average is %.2f. You got grade B\n", name, a);
    }
    else if("a<=70 and a >= 60"){
    printf("%s, your average is %.2f. You got grade C\n", name, a);
    }
    else if("a<=60 and a>=50"){
    printf("%s, your average is %.2f. You got grade D\n", name, a);
    }
    else if(a<50){
    printf("%s, your average is %.2f. You got grade F\n", name, a);
    }


    


    

    
}
