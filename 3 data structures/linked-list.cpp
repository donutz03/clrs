list-search(l,k)

x=l.head
while x!=NIL and x.hey!=k
  x=x.next
return x

list-prepend(l,x)

  x.next=l.head
  x.prev=nil
  if l.head!=nil
    l.head.prev=x
  l.head=x

  list-insert(x,y)

  x.next=y.next
  x.prev=y
  if y.next!=nil
    y.next.prev=x
  y.next=x

list-delete(l,x)
  if x.prev!=nil
    x.prev.next=x.next
  else l.head=x.next
  if x.next!=nil
    x.next.prev=x.prev

  list-delete'(x)
  x.prev.next=x.next
  x.next.prev=x.prev

  list-insert'(x,y)
  x.next=y.next
  x.prev=y
  y.next.prev=x
  y.next=x

  list-search'(l,k)
  l.nil.key=k
  x=l.nil.next
  while x.key!=k
    x=x.next
  if x==l.nil
    return nil
  else return x





















  
