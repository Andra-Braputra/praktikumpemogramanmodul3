a = int(input())
if 10 > a > 0:
    print("satuan")
elif 10 <= a < 20:
    print("belasan")
elif a == 0:
    print("nol")
elif 20 <= a < 100:
    print("puluhan")
elif a >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")