#include<stdio.h>
int main() {
    char str[20];
    fgets(str,sizeof(str),stdin);
    char a[20];
    for (int i =0;str[i]!='@'&& str[i]!='\0'; i++) {
        printf("%s",str);
    }
    return 0;
}