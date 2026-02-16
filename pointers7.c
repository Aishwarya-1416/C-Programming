#include <stdio.h>
int main() {
    char str[101];
    scanf("%s", str);
    char *start, *end;
    int flag = 1;
    for(start = str, end = str; *end != '\0'; end++);
    end--;
    for(; start < end; start++, end--) {
        if(*start != *end) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
}
