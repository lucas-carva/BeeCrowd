## posso melhorar MUITO isso

numbers = input().split()

A, B, C = numbers

pi = 3.14159

triangle = (float(A) * float(C)/2) #A*C)/2
circle = pi * float(C) ** 2 #pi * C^2
trapeze = ((float(A)+float(B)) * float(C)) / 2 #(A+B)*C)/2
square = float(B)**2
retangle = float(A) * float (B)

print(f"TRIANGULO: {triangle:.3f}")
print(f"CIRCULO: {circle:.3f}")
print(f"TRAPEZIO: {trapeze:.3f}")
print(f"QUADRADO: {square:.3f}")
print(f"RETANGULO: {retangle:.3f}")