#include<stdio.h>
#include"swap.h"
int main(){
        int arr[]={2,1,3,1,2};
        int n=sizeof(arr)/sizeof(arr[0]);
//      bsort(arr,n);
        int s=selectionSort(arr,n);
        printf("%d\n",s);
}
