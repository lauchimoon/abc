n,m = input().split()
s = input()
t = input()
pref = t.startswith(s)
suff = t.endswith(s)
if pref and suff:
    print(0)
elif pref and not suff:
    print(1)
elif not pref and suff:
    print(2)
else:
    print(3)
