a = input().strip('{}').replace(' ', '')
if not a:
    print(0)
else:
    a = a.split(',')
    l = set(a)
    print(len(l))
