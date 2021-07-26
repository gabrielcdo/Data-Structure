def merge(arr):
    if len(arr) ==1:
        return arr
    mid = len(arr)//2
    left = arr[:mid]
    right = arr[mid:]
    return mergesorted(merge(left) , merge(right))

def mergesorted(left , right):
    arraux = [None]*(len(left)+len(right))
    i = k = j = 0 
    left.append(9999)
    right.append(9999)
    while k < len(arraux):
      if left[i]<=right[j]:
        arraux[k] = left[i]
        i+=1
      else:
        arraux[k] = right[j]
        j+=1
      k+=1
    return arraux