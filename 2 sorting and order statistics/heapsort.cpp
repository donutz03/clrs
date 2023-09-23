parent(i)
  return i/2

left(i)
  return 2i

right(i)
  return 2i+1

max-heapify(a,i)
  l=left(i)
  r=right(i)
  if l<=a.heap-size and a[l]>a[i]
    largest=l
  else largest=i
  if r<=a.heap-size and a[r]>a[largest]
    largest=r
  if largest!=i
    exchange a[i] with a[largest]
    max-heapify(a,largest)

//building a heap
  build-max-heap(a,n)
    a.heap-size=n
    for i=floor(n/2) downto 1
      max-heapify(a,i)













  
