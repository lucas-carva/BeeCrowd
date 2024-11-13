n = int(input())

print(n)

x = n//100
n %= 100

print(x, "nota(s) de R$ 100,00")

x = n//50
n %=50

print(x, "nota(s) de R$ 50,00")

x = n//20
n %= 20

print(x, "nota(s) de R$ 20,00")

x = n//10
n %=10

print(x, "nota(s) de R$ 10,00")

x = n//5
n %=5

print(x, "nota(s) de R$ 5,00")

x = n//2
n %=2

print(x, "nota(s) de R$ 2,00")

x = n;
print(x, "nota(s) de R$ 1,00")
