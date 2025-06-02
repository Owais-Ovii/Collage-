#include<stdio.h>

/* **************************
Function to initialise and simultaneously show the matrix
*/
int IMatrix(int r,int c,int matrix[r][c]){//Parameters of the matrix are rows, columns and an output matrix
//initialise with 0s
for (int i = 0; i < r; i++)
{
for(int j =0; j<c; j++){

matrix[i][j]=0;

}}
//
//Simulateneous input and display of array 
printf("\n");
for (int i = 0; i < r; i++)
{
for(int j =0; j<c; j++){

    for (int k = 0; k < r; k++)
    {
for(int l =0 ; l<c;l++){

if (l==0){  printf("| ");    } 

printf("%d ",matrix[k][l]);

if (l==c-1){    printf("|");   }


}  printf("\n");  }
    
scanf("%d",&matrix[i][j]);
}}
//

// print entire stored matrix
printf("\n\n");
for (int k = 0; k < r; k++)
    {
for(int l =0 ; l<c;l++){

    if (l==0)
    {
printf("| ");    }

    
printf("%d ",matrix[k][l]);
if (l==c-1)
{
printf("|");}


}  printf("\n");  }
    return 0;
}
/* **************** */

/* **********************
Fn For matrix multiplication A * B
*/
int matmul(int rows1,int columns1,int columns2,int mat1[rows1][columns1],int mat2[columns1][columns2],int out[rows1][columns2])
{
    int o=0;
    for(int i =0;i<rows1;i++)//i = konsa row Matrix A ka select kiya hai
    {
        
        for(int j=0;j<columns2;j++)//j = selected column of B matrix
        {
        
            for(int k=0;k<columns1;k++)//k = kitne baar mujhe product ko sum karna hai
            {
                
                o+=(mat1[i][k]*mat2[k][j]);
                out[i][j]=o;
            }
            o=0;

        }
        
    }
    
    return 0;
}


/* **************** */


/*  ************************
Function to display a matrix
*/
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
/* ***************** */



int main(){

int matri[2][2];
IMatrix(2,2,matri);

int mat2[2][2];
IMatrix(2,2,mat2);

int out[2][2];
matmul(2,2,2,matri,mat2,out);

disimat(2,2,out);
    return 0;
}