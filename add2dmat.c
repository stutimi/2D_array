#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int brr[2][2]= {{1,2},{3,4}};
    int matrix[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            matrix[i][j]=arr[i][j]+brr[i][j];}
        printf("\n");
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}