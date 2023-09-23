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
