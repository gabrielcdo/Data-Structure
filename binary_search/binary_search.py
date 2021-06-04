def insertion_sort(arr , value):
    left = 0 
    right = arr.size()-1
    mid = 0
    while left <=right:
        mid = (left + right)/2
        if(value < arr[mid]):
            right = mid - 1
        elif (value > arr[mid]):
            left = mid +1 
        else:
            return mid 
        return -1

    vetor = [ 1 , 2 , 3 , 4 , 5 , 6 , 7 ]
    print (insertion_sort(vetor , 3))


