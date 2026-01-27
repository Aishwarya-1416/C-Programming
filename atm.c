#include <stdio.h>
int main() {
    int type,amount,balance;
    scanf("%d %d %d",&type,&amount,&balance);
    switch(type){
        case 1:
            if(balance <= amount){
                printf("Transaction Successfull");
            }
            else{
                printf("Insufficient balance");
            }
            break;
        case 2:
            if(amount>5000) {
                printf("Limit Exceed");
            }
            else if(balance >= amount){
                printf("Transaction Successfully");
            }
            else{
                printf("Transaction rejected");
            }
            break;
        default:
            printf("Invalid accountType");
            return 0;
    }
}
