#include<stdio.h>
int main() {
    char str1[100],str2[100];
    int i;
    fgets(str1,sizeof(str1),stdin);
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    printf("%s",str2);
    return 0;
}