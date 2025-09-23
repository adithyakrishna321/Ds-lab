#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("Enter the number of rows and column of the matrices: ");
scanf("%d%d",&m,&n);
int A[m][n],B[m][n],sum[m][n],sub[m][n],Mul[m][n];
printf("Enter elements of Matrix A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("Enter elements of matrix B:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
for(i=0;i<m;i++)
for(j=0;j<m;j++)
sum[i][j]=A[i][j]+B[i][j];
for(i=0;i<m;i++)
for(j=0;j<m;j++)
sub[i][j]=A[i][j]-B[i][j];
if(m==n){
for(i=0;i<m;i++){
for(j=0;j<m;j++){
Mul[i][j]=0;
for(k=0;k<n;k++){
Mul[i][j] +=A[j][k]*B[k][j];
}
}
}
}
printf("\nMatrix Addition:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",sum[i][j]);
printf("\n");
}
printf("\nMatrix subraction:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",sub[i][j]);
printf("\n");
}
if(m=n){
printf("\n<Matrix Multiplication:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",Mul[i][j]);
printf("\n");
}
}
else
{printf("\nMatrixmultiplication not possible (not square matrices).\n");
}
return 0;
}
