//q2. to calculate sum of each row in the matrix?
#include<stdio.h>
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<column; j++){
            sum+=matrix[i][j];
        }
        printf("%d\n",sum);
    }
}