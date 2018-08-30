def mergesort(array):
    if(len(array)>1):
        mid= len(array)//2
        leftarray=array[:mid]
        rightarray=array[mid:]
        mergesort(leftarray)
        mergesort(rightarray)

        i=0
        j=0
        k=0
        while(i<len(leftarray) and j<len(rightarray)):
            if(leftarray[i]<rightarray[j]):
                array[k]=leftarray[i]
                i=i+1
            else:
                array[k]=rightarray[j]
                j=j+1
            k=k+1
        while(i<len(leftarray)):
            array[k]=leftarray[i]
            i=i+1
            k=k+1
        while(j<len(rightarray)):
            array[k]=rightarray[j]
            j=j+1
            k=k+1
array=[9,2,3,1,6,5,7,8,0]
print(array)
mergesort(array)
print(array)
