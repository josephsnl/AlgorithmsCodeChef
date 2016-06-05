#include<stdio.h>
#include<stdlib.h>
int main() {
  int cash;
  float balance;
      scanf("%d %f",&cash,&balance);
      if ((cash % 5 == 0) && (cash > 0) && (cash <= 2000) &&
       (balance <= 2000) && (balance >= 0) && (balance > cash+0.50)){
             balance = ((balance - cash) - 0.50);
             printf("%.2f", balance);
      }
      else{
          printf("%.2f", balance);
      }
  return 0;
}
 
