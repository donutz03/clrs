inorder-tree-walk(x)
  if x!=nil
    inorder-tree-walk(x.left)
    print x.key
    inorder-tree-walk(x.right)

tree-search(x,k)
  if x==nil or k==x.key
    return x
  if k<x.key 
    return tree-search(x.left,k)
  else return tree-search(x.right,k)

  iterative-tree-search(x,k)
  while x!=nil and k!=x.key
    if k<x.key
      x=x.left
    else x=x.right
  return x

  tree-minimum(x)
  while x.left != nil
    x=x.left
  return x

  tree-maximum(x)
  while x.right !=nil
    x=x.right
  return x

tree-successor(x)
  if x.right!=nil
    return tree-minimum(x.right)
  else
    y=x.p
    while y!=nil and x==y.right
      x=y
      y=y.p
    return y

tree-insert(t,z)
  x=t.root
  y=nil
  while x!=nil
    y=x
    if z.key<x.key
      x=x.left
    else x=x.right
  z.p=y
  if y==nil
  t.root=z
  elseif z.key<y.key
    y.lefet=z
  else y.right=z

transplant(t,u,v)
  if u.p==nil
    t.root=v
  elseif u==u.p.left
    u.p.left=v
  else u.p.right=v
  if v!=nil
    v.p=u.p
















  
