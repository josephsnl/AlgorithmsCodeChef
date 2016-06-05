#include<stdio.h>

int factorial(long int *nums, int size){
  int i, j, temp;
  int fact;
  for (i=0; i<size; i++){   
      temp=nums[i];
      fact=1;
      for(j=1; j<=temp; j++){
          fact=fact*j;
      }
      nums[i]=fact;
  }
  for(i=0; i<size; i++){
  printf("%d\n",nums[i]);
  }
return 0;
}

int main(){
   int numOfInput;
   int size;
   scanf("%d",&numOfInput);

   long int nums[numOfInput];
   int i;
   for(i=0; i<numOfInput; i++){
       scanf("%d",&nums[i]);
   }

   size = sizeof(nums) / sizeof(nums[0]);
   factorial(nums, size);
   return 0;
}

