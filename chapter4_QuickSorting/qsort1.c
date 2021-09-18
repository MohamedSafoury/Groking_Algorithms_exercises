#include <stdio.h>

int partition(int* arr , int start , int end)
{
    int pivot = arr[end] ; 
    int i = start - 1 ; 
    int temp ; 
    int j = 0 ; 

    for ( j = start ; j < end ; j++)
    {
        if (arr[j] < pivot)
        {
            i++ ; 
            temp = arr[i] ; 
            arr[i] = arr[j]; 
            arr[j] = temp ; 
        }
    }
    
    temp = arr[i+1] ; 
    arr[i+1] = arr[end];
    arr[end] = temp ; 

    return i+1 ; 

}

void Qsort(int* arr , int start , int end)
{
    if (start < end)
    {
        int q = partition(arr , start , end);
        Qsort(arr,start,q-1);
        Qsort(arr,q+1,end); 
    }
}




int main(void)
{   
    int arr[10] = {9,8,5,7,2,3,4,1,6};
    Qsort(arr,0,9);
    int i = 0 ; 
    for (i = 0 ; i <10 ; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\r");

}