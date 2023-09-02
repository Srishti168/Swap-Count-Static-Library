#include<stdio.h>
int bubbleSort(int *arr,int n)
{
   int swaps=0;
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
              int t=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
              swaps++;
           }
       }
    }
   return swaps;
}
int selectionSort(int *arr,int n)
{
    int swaps=0;
    for(int i=0;i<n-1;i++)
    {
       int min_index=i;
       for(int j=i+1;j<n;j++)
       {
          if(arr[min_index]>arr[j])
          {
             min_index=j;
          }
        }
       if(min_index!=i)
       {
          int t=arr[i];
          arr[i]=arr[min_index];
          arr[min_index]=t;
          swaps++;
       }

   }
  return swaps;
}

int insertionSort(int *arr, int n)
{
    int swaps=0;
    for(int i=1;i<n;i++)
    {
       int key=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key)
       {
         arr[j+1]=arr[j];
         j--;
         swaps++;
       }
     arr[j+1]=key;
    }
  return swaps;
}
int merge(int *arr,int l,int m,int r)
{
   int swaps=0;
   int n1=m-l+1;
   int n2=r-m;

   int a[n1];
   int b[n2];

   for(int t=0;t<n1;t++){
        a[t]=arr[t+l];
   }

   for(int t=0;t<n2;t++){
        b[t]=arr[t+m+1];
   }

   int i=0,j=0,k=l;

   while(i<n1 && j<n2)
   {
        if(a[i]<=b[j])
         {
            arr[k]=a[i];
            i++;
          }
         else{
            arr[k]=b[j];
            j++;
            swaps+=n1-i;
          }
       k++;
   }

   while(i<n1)
   {
       arr[k]=a[i];
       i++;
       k++;
   }
   while(j<n2)
   {
       arr[k]=b[j];
       j++;
       k++;
   }
   return swaps;

}

int mergeSort(int *arr,int l,int r){
    if(l>=r)
    {
       return 0;
    }

  int swaps=0;
  int mid=(l+r)/2;

  swaps+=mergeSort(arr,l,mid);
  swaps+=mergeSort(arr,mid+1,r);
  swaps+=merge(arr,l,mid,r);

  return swaps;

}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high, int* swaps)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            (*swaps)++;
        }
    }

    swap(&arr[i + 1], &arr[high]);
    (*swaps)++;

    return (i + 1);
}
int quickSort(int *arr, int low, int high) {
    if (low < high)
    {
        int swaps = 0;
        int pivotIndex = partition(arr, low, high, &swaps);

        swaps += quickSort(arr, low, pivotIndex - 1);
        swaps += quickSort(arr, pivotIndex + 1, high);
        return swaps;
    }
    return 0;
}
