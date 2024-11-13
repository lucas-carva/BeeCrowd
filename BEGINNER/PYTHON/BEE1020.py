n = int(input())

ano = n//365
n %= 365
mes = n//30
dia = n%30

print(ano, "ano(s)")
print(mes, "mes(es)")
print(dia,"dia(s)")


