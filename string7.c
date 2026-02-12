#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    fgets(str, sizeof(str),stdin);
    int count = 0;
    for (int i=1;str[i]!='\0';i++){
        if (!(str[i]== 'a'|| str[i]== 'e'|| str[i]== 'i'|| str[i]== 'o'||str[i]== 'u'||
            str[i]== 'A'|| str[i]== 'E'|| str[i]== 'I'|| str[i]== 'O'||str[i]== 'U')){
            count++;
            }
    }
    printf("%d",count);
    return 0;
}
