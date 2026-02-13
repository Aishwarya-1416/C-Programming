#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    int words = 0;
    fgets(str,sizeof(str),stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if (str[i]==' ') {
            count++;
        }
        words = count +1;
    }
    printf("%d",words);
    return 0;
}