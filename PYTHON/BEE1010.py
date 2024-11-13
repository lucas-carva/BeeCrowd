p1 = input().split()
p2 = input().split()

cod1, qtd1, preco1 = p1;
cod2, qtd2, preco2 = p2;
    
total = int(qtd1)*float(preco1) + int(qtd2) * float(preco2)

print(f"VALOR A PAGAR: R$ {total:.2f}")

