#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            matrix[i][j]=10;}
        printf("\n");
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}