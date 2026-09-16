
//transpaose of the matrix?
#include<stdio.h>
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}

