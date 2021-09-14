#include <stdio.h>

long int rec_sum(int* arr , int size)
{
    if (size <= 0 )
    {
        return 0 ;
    }
    else
    {
        return arr[size-1] + rec_sum(arr,size-1) ; 
    }
}

int main(void)
{
    int arr[] = {1,2,3,4};
    printf("%d\n",rec_sum(arr,4));
    return 0 ;
}