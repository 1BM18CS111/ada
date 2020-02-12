#include <stdio.h> 
#include <time.h>
  
void swap(int *p, int *q) 
{ 
    int temp = *p; 
    *p = *q; 
    *q = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i=0;i<n-1;i++)       
  
       
       for (j=0;j<n-i-1;j++)  
           if (arr[j]>arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0;i<size;i++) 
        printf("%d",arr[i]); 
    printf("\n"); 
} 
  
int sort() 
{ 
    int arr[] = {4120, 3478, 5, 120, 2200, 1111, 9455}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 

int main() 
{ 
    clock_t t; 
    t = clock(); 
    sort(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("sort() took %f seconds to execute \n", time_taken); 
    return 0; 
} 



















