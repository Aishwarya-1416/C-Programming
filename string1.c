#include<stdio.h>
int main() {
    char str[20];
    fgets(str,sizeof(str),stdin);
    int count=0;
    for (int i=1;str[i]!='\0'; i++) {
        count++;
    }
    printf("%d",count);
    return 0;
}