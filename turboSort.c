#include<stdio.h>

int main(){
    int t,i,d,temp;
    scanf("%d",&t);
    int N[t];
    for(i = 0; i<t; i++){
        scanf("%d",&N[i]);
    }
    for(i = 1; i<t; i++){
        d = i;
        while(d>0 && N[d]<N[d-1]){
           temp=N[d];
            N[d]=N[d-1];
            N[d-1]=temp;
            d--;
        }
    }
    for(i = 0; i<t; i++){
        printf("%d\n",N[i]);
    }
}
