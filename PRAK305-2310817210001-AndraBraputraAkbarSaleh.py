s = int(input())
d = s // 86400  
s = s - d * 86400
a = s // 3600  
s = s - a * 3600
b = s // 60
s = s - b * 60
if d == 0:
    print(f"{a:02d}:{b:02d}:{s:02d}")
else:
    print(f"{d} hari {a:02d}:{b:02d}:{s:02d}")