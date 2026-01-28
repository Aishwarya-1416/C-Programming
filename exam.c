#include <stdio.h>
int main(){
    int marks, attendance;
    scanf("%d %d",&marks,&attendance);

    if(attendance < 75)
        printf("Fail");
    else if(marks >= 75)
        printf("Distinction");
    else if(marks >= 50)
        printf("Pass");
    else
        printf("Fail");
}