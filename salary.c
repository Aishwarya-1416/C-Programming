#include <stdio.h>
int main(){
    int code, exp, salary;
    scanf("%d %d",&code,&exp);

    switch(code){
        case 1:
            salary = 50000 + exp * 5000;
            printf("Salary ₹%d",salary);
            break;
        case 2:
            salary = 35000 + exp * 5000;
            printf("Salary ₹%d",salary);
            break;
        default:
            printf("Invalid Designation");
    }
}