n = int(input())
a = list(map(int, input().split()))
s = a[:3]
s.sort(reverse=True)
print(s[2])
for k in range(3,n):
    s.append(a[k])
    s.sort(reverse=True)
    s.pop()
    print(s[2])

