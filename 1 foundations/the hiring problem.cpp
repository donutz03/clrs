hire-assistant(n)
  best=0//least qualified dummy candidate
  for i=1 to n
    interview candidate i
      if candidate i is better than candidate best
        best=i
        hire candidate i

randomized-hire-assistant(n)
    randomly permute the list of candidates
    hire-assistant(n)
