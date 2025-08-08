#include <stdio.h>
int main(){
    int o;
    float d, w, b;
    b = 0;
    while (1){
        printf("====== ATM MENU ======\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &o);
        switch (o){
            case 1:
                printf("Current Balance: %.2f \n", b);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &d);
                b =  b + d;
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &w);
                b = b - w;
                printf("Withdrawal successful.\n");
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;
                break;
        }
    }
}