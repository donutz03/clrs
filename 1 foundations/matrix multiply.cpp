matrix-multiply(a,b,c,n)
  for i=1 to n
    for j=1 to n
      for k=1 to n
        cij=cij+aik*bjk

//recursive
matrix-multiply-recursive(a,b,c,n)
  if n==1
  //base case
    c11=c11+a11*b11
    return
  //divide
partition a,b, and c into n/2 * n/2 submatrices
  a11,a12,a21,a22,b11,b12,b21,b22,c11,c12,c21,c22
  //conquer
  matrix-multiply-recursive(a11,b11,c11,n/2)
  matrix-multiply-recursive(a11,b12,c12,n/2)
  ...
  matrix-multiply-recursive(a22,b22,c22,n/2)
