#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("enter three numbers");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2){
   if(num1>num3){
  printf("largest is number is %d",num1);
  }
  else{
    printf("the largest number is %d",num3);
  }
}
  
 else if(num2>num3){
   if(num2>num1){
    printf("largest is number %d",num2);
   }
  else{
  printf("largest is number %d",num1);
  }
} 
else if (num3>num1){
  if(num3>num2){
  printf("the largest number is %d",num3);
  }
  else{
  printf("the largest number is %d",num2);
  }
}

  else{
    printf("the numbers are equal");
    }
  return 0;
 }
