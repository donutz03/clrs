binsearch(a,b,v)
if then a>b 
  return NIL
end if
m=floor((a+b)/2)
if thenm=v
  return m
end if
if thenm<v
  return binserach(a,m,v)
end if
return binsearch(m+1,b,v)
