def kadane(arr):
  max_global = max_local = 0
  for i in arr:
    if (i>max_local+i):
      max_local = i
    else :
      max_local = i+max_local
    if max_local>max_global:
      max_global = max_local
  return max_global