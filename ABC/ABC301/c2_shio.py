from collections import Counter
 
S = sorted(list(input()))
T = sorted(list(input()))
 
 
atc = set(["a", "t", "c", "o", "d", "e", "r"])
 
ng = 0
 
SC = Counter(S)
TC = Counter(T)
 
sa = SC["@"]
ta = TC["@"]
 
SN = len(S)
TN = len(T)
si = 0
ti = 0
 
# print(S)
# print(T)
 
while(si != SN and ti != TN):
  if S[si] == T[ti]:
    ti += 1
    si += 1
  else:
    if S[si] == "@":
      if T[si] in atc:
        sa -= 1
        ti += 1
        si += 1
      else:
        ng += 1
        break
    else:
      ng += 1
      break
  elif S[si] > T[ti]:
    if T[si] == "@":
      if S[si] in atc:
        ta -= 1
        ti += 1
        si += 1
      else:
        ng += 1
        break
    else:
      ng += 1
      break
 
 
print("No" if ng else "Yes")
