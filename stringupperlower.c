#include<stdio.h>
int main() {
    char str[20];
    fgets(str,sizeof(str),stdin);
    int upper=0, lower=0;
    for (int i =0;str[i]!='\0'; i++) {
        if (str[i]>='a' && str[i]<='z') {
            lower++;
        }
        else if (str[i]>='A' && str[i]<='Z') {
            upper++;
        }
    }
    printf("upper case is %d\n",upper);
    printf("lower case is %d\n",lower);
    return 0;
}