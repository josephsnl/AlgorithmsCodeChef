#include<stdio.h>

int main(){
    int unsorted[5]={2,5,7,3,8};
    int size = 5, i = 0;
    int j, temp;
    for(j = 1; j<size; j++){
        i=j;
        while(i>0 && unsorted[i]<unsorted[i-1]){
            temp = unsorted[i];
            unsorted[i] = unsorted[i-1];
            unsorted[i-1] = temp;
            i--;
        }
    }
    printf("Sorted nums\n");
    for(i = 0; i<size; i++){
        printf("%d\n", unsorted[i]);
    }
}
