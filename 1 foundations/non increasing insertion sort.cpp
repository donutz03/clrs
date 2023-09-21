for j = 2 to a.length do
  key = a[j]
  // insert a[j] into the sorted sequence a[1..j-1].
  i = j - 1
  while i > 0 and a[i] < key do
    a[i+1] = a[i]
    i = i - 1
  end while
end for
a[i + 1] = key
