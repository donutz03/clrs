enqueue(q,x)

q[q.tail]=x
if q.tail==q.size
  q.tail=1
else q.tail=q.tail+1

dequeue(q)

x=q[q.head]
if q.head==q.size
  q.head=1
else q.head=q.head+1
return x
