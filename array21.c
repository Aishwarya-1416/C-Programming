#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int found = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                found = a[i];
                break;
            }
        }
        if(found!=-1)
            break;
    }
    printf("%d",found);
    return 0;
}