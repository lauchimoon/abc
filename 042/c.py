def digs(i):
    return [int(x) for x in str(i)]

def any_in(l,ll):
    for x in l:
        if x in ll:
            return True
    return False

n,k = map(int, input().split())
dig = list(map(int, input().split()))
i = n
while any_in(digs(i),dig):
    i += 1
print(i)
