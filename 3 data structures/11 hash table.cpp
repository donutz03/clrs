direct-address-search(t,k)
  return t[k]

direct-address-insert(t,x)
  t[key]=x

direct-address-delete(t,x)
  t[key]=nil

chained-has-insert(t,x)
  list-prepend(t[h(x.key)],x)

chained-hash-search(t,k)
  return list-search(t[h(k)],x)

chained-hash-delete(t,x)
  list-delete(t[h(key)],x)

  keys are integers, vectors or strings

hash-insert(t,k)
i=0
repeat
  q=h(k,i)
  if t[q]==nil
    t[q]=k
    return q
  else i=i+1
until i==m
error "ovr"

hash-search(t,k)
  i=0
  repeat
    q=h(k,i)
    if t[q]==k
      return q
    i=i+1
  until t[q]==nil or i==m
  return nil

  linear-probing-hash-delete
    while true
      t[q]=nil
      q'=q
      repeat
        q'=(q'+1)mod m
        k'=t[q']
        if k'==nil
          return
    until g(k',q)<g(k',q')
    t[q]=k'
    q=q'

week(k,a,b,t,r,m)
u=ceiling(t/w)
<k1,k2,...,ku>=chop(k)
q=b
for i=1 to u
return q mod m





















  
