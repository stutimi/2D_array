#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of coloms \n");
    scanf("%d",&c);
    int a[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}