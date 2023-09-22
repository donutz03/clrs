i=1
j=n
while i<j do
  if a[i]+a[j]=s then
    return true
  end if
  if a[i]+a[j]<s then
    i=i+1
  if a[i]+a[j]>s then
    j=j-1
  end if
end while
return false
