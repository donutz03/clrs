for i = 2 to n
  key = a[i]
  //inseret a[i] into the sorted subarray a[1:i-1]
  j = i - 1
  while j > 0 and a[j] > key
    a[j+1] = a[j]
    j = j - 1
  a[j+1] = key
