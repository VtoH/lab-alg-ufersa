allletters = []
contavogal = 0


while True:
    word = input('Escreva a palavra, escreva FIM para acabar: ').lower()
   
    if word == "fim":
        break
   
    allletters.extend(list(word))


for letra in allletters:
    if letra in {'a', 'e', 'i', 'o', 'u'}:
        contavogal += 1


print(f"A quantidade de vogais digitadas foram: {contavogal}")