#include <stdio.h> 
#include <time.h>  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, max_idx; 
  
    
    for (i = 0; i < n-1; i++) 
    { 

        max_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] > arr[max_idx]) 
            max_idx = j; 
  
       
        swap(&arr[max_idx], &arr[i]); 
    } 
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  

int sort() 
{   int k;
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printf("Entervalue of k");
	scanf("%d",&k);
    printf("Largest k elements: \n"); 
    printArray(arr, k); 
   
    return 0; 
} 


int main() 
{ 
    clock_t t; 
    t = clock(); 
    sort(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; 
  
    printf("sort() took %f seconds to execute \n", time_taken); 
    return 0; 
} 


















