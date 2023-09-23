online-maximum(k,n)
  best-score=-infinite
  for i=1 to k
    if score(i)>best-score
      best-score=score(i)
  for i=k+1 to n
    if score(i)>best-score
      return i
  return n
