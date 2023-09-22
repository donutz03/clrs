carry=0
for i=1 to n do
  c[i]=(a[i]+b[i]+carry)(mod 2)
  if a[i]+b[i]+carry>=2 then
    carry=1
  else
    carry=0
  end if
end for
c[n+1]=carry
