import string
n = int(input())
a = input()
a = a.lower()
letters = set(a)
alphabet = set(string.ascii_lowercase)
if alphabet.issubset(letters):
    print("YES")
else:
    print("NO")
