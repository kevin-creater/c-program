#include<stdio.h>
int main(){
  int num1,num2;
  char operation;
  printf("enter any two numbers");
  scanf("%d%d",&num1,&num2);
  printf("\nchose an operation:+, -, *, /, %%");
  scanf(" %c",&operation);
  switch(operation){
    case'+':
    printf("the sum is:%d",num1+num2);
    break;
    case'-':
    printf("the difference is:%d",num1-num2);
    break;
    case'*':
    printf("the product is:%d",num1*num2);
    break;
    case'/':
    printf("the division is:%d",num1/num2);
    break;
    case'%':
    printf("the modulus is:%d",num1%num2);
    break;
    default:
    printf("invalid output");
    }
 return 0;
 }
    
  
