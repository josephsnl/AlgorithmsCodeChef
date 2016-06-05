#include<stdio.h>

int insertionSort(int arry[], int n){
    int i, d, temp;
    for(i=1; i<n; i++){
        d=i;
        while(d>0 && arry[n]<arry[n-1]){
            temp=arry[n];
            arry[n]=arry[n-1];
            arry[n-1]=temp;
            d--;
        }
    }
    return arry;
}

int main(){
    int n,i, *arr;
    scanf("%d",&n);
    int arry[n];
    for(i=0; i<n; i++){
        scanf("%d",arry[i]);
    }
    
    arr = insertionSort(arry, n);

    for(i=0; i<n; i++){
        printf("*(arr + %d) : %d \n", i, *(arr+i));
    }
    
    return 0;
}


