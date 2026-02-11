#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    fgets(str,sizeof(str),stdin);
    int len =0,digit=0;
    for(int i=0;str[i]!=0;i++) {
        if (str[i]=='\n') {
            continue;
        }
        len++;
        if (str[i]>='0' && str[i]<='9') {
            digit = 1;
        }
    }
    if (len==8 && digit==1) {
        printf("The password is strong");
    }
    else {
        printf("The password is not strong");
    }
    return 0;
}