bubblesort(a,n)
for i=1 to n-1
  for j=n downto i+1
    if a[j]<a[j-1]
      exchange a[j] with a[j-1]
