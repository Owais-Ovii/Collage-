#include<stdio.h>

/*
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
for (int i = 0; i < r; i++)
{
for(int j =0; j<c; j++){

    for (int k = 0; k < r; k++)
    {
for(int l =0 ; l<c;l++){

if (l==0){  printf("| ");    } 

printf("%d ",matrix[k][l]);

if (l==c-1){    printf(" |");   }


}  printf("\n");  }
    
scanf("%d",&matrix[i][j]);
}}
//

// print entire stored matrix
printf("\nFor the intiger Matrix A:\n");
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
/**/

int main(){

int matri[3][3];
IMatrix(3,3,matri);


    return 0;
}