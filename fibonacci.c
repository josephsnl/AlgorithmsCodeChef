#include<stdio.h>

int fibonacci(int num){
    int FiNum;
    if(num == 0){
        return 0;
    }
    
    else if(num == 1){
        return 1;
    }
    
    else if(num < 0){
        printf("Not a valid number");
    }

    else if(num>1){
        FiNum = fibonacci(num -1) + fibonacci(num -2);
        return FiNum;
    }
}

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    num = fibonacci(num);
    printf("Fibonacci Series %d\n", num);
}

