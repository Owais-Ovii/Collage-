#include<stdio.h>

/*
Fn For sum of two integer matricies
*********************************** */
void matsum(int rows,int columns,int matrix1[rows][columns],int matrix2[rows][columns]){//would save the sum in the matrix1 itself
    
    for(int i =0;i<rows;i++){
        
        for(int j=0; j<columns;j++){
            
            matrix1[i][j]+=matrix2[i][j];
            
        }}}
/* ****************************************** */


/* 
Function to display a matrix
**************************** */
void disimat(int rows,int columns,int matrix[][columns])
{//No of rows and columns of a matrix to print
        // print entire stored matrix
printf("\n\n");
for (int k = 0; k < rows; k++)
    {
for(int l =0 ; l<columns;l++){

    if (l==0)
    {
printf("| ");    }

    
printf("%d ",matrix[k][l]);
if (l==columns-1)
{
printf("|");}


}  printf("\n");  }
printf("\n");   
}
/* ******************************** */



int main(){

int matri[3][3]={1,2,3,4,5,6,7,8,9},a,mat2[3][3]={9,8,7,6,5,4,3,2,1};

matsum(3,3,matri,mat2);

disimat(3,3,matri);


    return 0;
}