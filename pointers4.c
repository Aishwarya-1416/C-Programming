#include <stdio.h>
int main() {
    char str1[101], str2[101];
    scanf(" %[^\n]", str1);
    char *p1, *p2;
    for(p1 = str1, p2 = str2; *p1 != '\0'; p1++, p2++) {
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("%s", str2);
    return 0;
}
