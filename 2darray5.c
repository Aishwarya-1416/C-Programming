#include<stdio.h>
int main() {
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int dept_index=0;
    int min_sum=0;
    for(int i=0;i<rows;i++) {
        int sum=0;
        for(int j=0;j<columns;j++) {
            sum+=arr[i][j];
        }
        if (i==0 || sum<min_sum) {
            min_sum=sum;
            dept_index=i;
        }
    }
    printf("%d",dept_index);
    return 0;
}