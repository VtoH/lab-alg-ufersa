# Lista que armazena os números primos
PrimeList = []

# Função que verifica se um número é primo
def VerifiPrime(i):
    if i == 2:
        return True
    for j in range(2, int(i**0.5) + 1):
        if i % j == 0:
            return False
    return True

# Entrada do usuário com validação de tipo e valor
while True:
    try:
        Number = int(input('Escreva um número inteiro maior que 1: '))
        if Number <= 1:
            print("Erro, número inválido. Digite um número maior que 1.")
        else:
            break  # Entrada válida, sai do loop
    except ValueError:
        print("Erro: apenas números inteiros são válidos.")

# Preenche a lista com números primos menores que o informado
for i in range(2, Number):
    if VerifiPrime(i):
        PrimeList.append(i)

# Exibe os números primos encontrados
print("Números primos menores que", Number, "são:", PrimeList)
