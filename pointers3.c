#include <stdio.h>
int main() {
    char str[101];
    scanf(" %[^\n]", str);
    char *ptr;
    int count = 0;
    for(ptr = str; *ptr != '\0'; ptr++) {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
           *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U') {
            count++;
           }
    }
    printf("%d", count);
    return 0;
}
