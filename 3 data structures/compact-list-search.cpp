compact-list-search(key,next,head,n,k)
  i=head
  while i!=nil and key[i]<k
    j=random(1,n)
    if key[i]<key[j] and key[j]<=k
      i=j
      if key[i]==k
        return i
    i=next[i]
  if i=nil or key[i]>k
    return nil
  else return i

compact-list-serach'(key,next,head,n,k,t)
  i=head
  for q=1 to t
    j=random(1,n)
    if key[i]<key[j] and key[j]<=k
      i=j
      if key[i]==k
        return i
  while i!=nil and key[i]<k
    i=next[i]
  if i==nil or key[i]>k
    return nil
  else return i
