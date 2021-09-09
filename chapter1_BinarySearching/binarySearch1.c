#include <stdio.h>
#include <stdint.h>

int binarySearch(int* arr , int size , int element)
{
    int low = 0 ; 
    int high = size ; 
    while(low <= high)
    {
        int mid = (low+high)/2 ; 
        int guess = arr[mid] ; 
        if (guess = element)
        {
            return mid ; 
        }
        else if (guess > element) /*too high*/
        {
            high = mid - 1  ; 

        }
        else
        {
            low = mid + 1 ;
        }
    }

    return -1 ; 
}

int main(void)
{

    int arr[5] = {10,20,30,40,50};
    printf("index:%d\n\r",binarySearch(arr,5,30));    
    return 0 ;
}

