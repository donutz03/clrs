merge(a,p,q,r)
  nl=q-p+1 //length of a[p:q]
  nr=r-q //length of a[q+1:r]
  let l[0:nl-1] and r[0:nr-1] be new arrays
  for i=0 to nl-1 //copy a[p:q] into l[0:nl-1]
    l[i]=a[p+i]
  for j=0 to nr-1 //copy a[q+1:r] into r[0:nr-1]
    r[j]=a[q+j+1]
  i=0//i indexes the smallest remaining element in l
  j=0//j indexes the smallest remaining element in r
  k=p//k indexes the location in a to fill
  while i<nl and j<nr
    if l[i]<=r[j]
      a[k]=l[j]
      i=i+1
    else a[k]=r[j]
         j=j+1
    k=k+1
  while i<nl
    a[k]=l[i]
    i=i+1
    k=k+1
  while j<nr
    a[j]=r[j]
    j=j+1
    k=k+1
  




















  
