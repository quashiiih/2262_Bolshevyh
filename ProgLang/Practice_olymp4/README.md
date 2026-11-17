### ������ 1. Kisa and Osya was here
```py
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input())

cnt = 0
res = 1 

while cnt < n:
    res += 1
    if is_prime(res):
        cnt += 1
print(res)
```

### ������ 2. ��� ���� ���
```py
n = int(input())
num = list(map(int, input().split()))
q = set()
res = n

for a in range(n):
    q.add(num[a])
    if len(q) == 3:
        res = a + 1
        break
print(res)
```

### ������ 3. ������ �� ������
```py
from string import ascii_lowercase

w = input()
mxcnt = -1
chr = ""

for char in ascii_lowercase:
    q = w.count(char)
    if q > mxcnt:
        mxcnt = q
        chr = char

res = w.replace(chr, "")
print(res)
```

### ������ 4. ������ � �����
```py

```

### ������ 5. ����� �� ���������
```py

```