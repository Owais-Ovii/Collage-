#include <stdio.h>

/* 
Function for trace of int matrix
******************************************* */
int trace(int rows,int array[rows][rows])
{

int trace=0;
for(int i =0;i<rows;i++)//total no of elems to add = t no of rows
{
    
 trace+=array[i][i];   
    
}

    return trace;
}
/* ******************************** */

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
/* ********************************* */


int main() {

int m1[3][3];
IMatrix(3,3,m1);

printf("%d",trace(3,m1));


    return 0;
}