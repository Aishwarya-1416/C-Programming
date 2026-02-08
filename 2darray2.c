#include<stdio.h>
#include<limits.h>
int main() {
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int arr[rows][columns];
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_max[rows],row_min[rows];
    for(int i=0;i<rows;i++) {
        row_max[i]=INT_MIN;
        row_min[i]=INT_MAX;
        for(int j=0;j<columns;j++) {
            if (arr[i][j] > row_max[i]) {
                row_max[i]=arr[i][j];
            }
            if (arr[i][j] < row_min[i]) {
                row_min[i]=arr[i][j];
            }
        }
    }
    int max_product=INT_MIN;
    for(int i=0;i<rows;i++) {
        for(int j=i+1;j<rows;j++) {
            int product1=row_max[i]*row_max[j];
            int product2=row_min[i]*row_min[j];
            if(product1>max_product) {
                max_product=product1;
            }
            if(product2>max_product) {
                max_product=product2;
            }
        }
    }
    printf("%d",max_product);
    return 0;
}