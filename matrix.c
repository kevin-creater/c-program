#include<stdio.h>
int main(){
  int i,j,row,col;
  printf("\nenter the rows and colums");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("\nenter the elements");
  for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
    scanf("%d",&matrix[i][j]);
   }
  }
  for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
    printf("%d\t",matrix[i][j]);
  }
  printf("\n");
  }
  return 0;
}
  

