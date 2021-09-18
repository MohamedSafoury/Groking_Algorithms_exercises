def quickSort(array):
    #base case
    if len(array) < 2 :
        return array
    #recusive case    
    else :
        pivot = array[0]
        less =  [i for i in array[1:] if i <= pivot]
        greater = [i for i in array[1:] if i > pivot]
        return quickSort(less) + [pivot] + quickSort(greater)


print(quickSort([1200,50,0.2,0.4,1,0,2000,10000,80,620,501,1000]))