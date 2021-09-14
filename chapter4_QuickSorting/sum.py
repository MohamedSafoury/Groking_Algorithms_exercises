def rec_sum(myList):
    
    xmyList = myList.copy()

    if(xmyList == []):
        return 0 
    else:
        return xmyList.pop(0) + rec_sum(xmyList)

ex =[1,2,3,4]

print(rec_sum(ex))
