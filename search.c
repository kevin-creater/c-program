#include <stdio.h>
int main(){
    int limit,i,item,found=0;
    printf("\n enter the elements");
    scanf("%d",&limit);
    int array [limit];
    printf("/n enter %d element:",limit);
    for(i=0;i<limit;i++){
      scanf("%d",&array[i]);
      }
      printf("enter the element to search");
      scanf("%d",&item);
      for(i=0;i<limit;i++){
       if(item==array[i])
      {
      found=1;
      break;
      }
      }
      if (found==1)
      printf("\n the given element found at position:%d",i+1);
      else
      printf("element not found");
     
        return 0;
}

