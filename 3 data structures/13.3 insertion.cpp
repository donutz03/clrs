rb-insert(t,z)
x=t.root
  y=t.nil
  while x!=t.nil
    y=x
    if z.key<x.key
      x=x.left
    else x=x.right
z.p=y
if y==t.nil
  t.root=z
elseif z.key<y.key
  y.left=z
else y.right=z
  
