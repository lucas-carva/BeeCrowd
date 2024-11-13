a, b = map(int, input().split())

if (b>a):
    b, a = a, b
    
if (a%b==0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
    