#include <stdio.h>
#include <stdlib.h>


int findSmallest(int* arr , int arrSize)
{
    int smallest_index = 0 ; 
    int smallest_element = arr[0];

    int index = 0 ; 

    for (index = 0 ; index <arrSize ; index++ )
    {
        if (arr[index] < smallest_element)
        {
            smallest_element = arr[index];
            smallest_index = index ; 
        }
        else
        {

        }
    }

    return smallest_index ; 
}

int* selectionSorting(int* arr , int arrSize)
{
    int* newArr = (int*) malloc(arrSize* sizeof(int));
    int index = 0 ; 
    for (index = 0 ; index < arrSize ; index++)
    {
        int smallest = findSmallest(arr,arrSize);
        newArr[index] = arr[smallest];
        arr[smallest] = INT_MAX ;//like deletion
    }

    return newArr ; 
}


int main(void)
{
    int arr[5] = {20,10,40,30,50};
    int*sArr = selectionSorting(arr,5);

    int i = 0 ; 
    for(i = 0 ; i <5 ; i++)
    {
        printf("%d\n\r",sArr[i]);
    }
}