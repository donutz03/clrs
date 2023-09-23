stack-empty(s)

if s.top==0
  return true
else return false

push(s, x)

if s.top==s.size
  error "overflow"
else s.top=s.top+1
  s[s.top]=x

  pop(s)

if stack-empty(s)
  error "underflow"
else s.top=s.top-1
  return s[s.top+1]
