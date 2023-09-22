for i=1 to n-1 do
  min=i
  for j=i+1 to n do
    //find the index of the i-th smalles element
    if a[j] < a[min] then
      min=j
    end if
  end for
  swap a[min] and a[i]
end for
  
