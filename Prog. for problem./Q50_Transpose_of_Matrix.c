#include <stdio.h>

/*
Fn for transpose of a matrix
***************************** */
void transpose(int rows, int columns,int array[rows][columns],int transpose[columns][rows])
{
    
    for(int i =0; i<rows;i++)
    {
        
    for(int j=0;j<columns;j++)
    {
        
    transpose[j][i]=array[i][j];    
        
    }
        
    }
    
}
/* ************************** */

/*
Function to initialise and simultaneously show the matrix
*********************************************************** */
int IMatrix(int r,int c,int matrix[r][c]){//Parameters of the matrix are rows, columns and an output matrix
//initialise with 0s
for (int i = 0; i < r; i++)
{
for(int j =0; j<c; j++){

matrix[i][j]=0;

}}
//
//Simulateneous input and display of array 
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
printf("\n");
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
/* ******************************* */

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
int main() {

int m[3][3];
IMatrix(3,3,m);

int o[3][3];
transpose(3,3,m,o);

disimat(3,3,o);
    return 0;
}