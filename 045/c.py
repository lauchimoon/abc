def gen(s):
    r = []
    def bt(i, curr):
        if i == len(s):
            if "+" in curr:
                r.append(curr)
            return
        bt(i+1,curr+"+"+s[i])
        bt(i+1,curr+s[i])
    bt(1,s[0])
    return r

s = input()
ans = int(s)
for r in gen(s):
    ss = list(map(int,r.split('+')))
    ans += sum(ss)
print(ans)
