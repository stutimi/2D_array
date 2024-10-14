#include<stdio.h>
int main(){
    int a[2][2] = {{1,2},{2,3}};
    int b[2][2] = {{1,3},{1,1}};
    int multiply[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            multiply[i][j]=a[i][j]*b[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}