print('Digite a operação a sser feita')
print('[1] Soma \n [2] Subtração \n [3] Multiplicção \n [4] Divisão \n [5] potenciação') 
opcao = int(input('Opção: ')) #escolha da operação
#ADIÇÃO
while opcao == 1:  
    primeiroNum= int(input('Digite o primeiro numero: '))
    segundoNum= int(input('Digite o segundo numero: '))
    print('O valor da soma é: ', primeiroNum+segundoNum)
    break
#SUBTRAÇÃO
while opcao == 2:
    primeiroNum= int(input('Digite o primeiro numero: '))
    segundoNum= int(input('Digite o segundo numero: '))
    print('O valor da soma é: ', primeiroNum-segundoNum)
    break
#MULTIPLICAÇÃO
while opcao == 3:
    primeiroNum= int(input('Digite o primeiro numero: '))
    segundoNum= int(input('Digite o segundo numero: '))
    print('O valor da soma é: ', primeiroNum*segundoNum)
    break
#DIVISÃO
while opcao == 4:
    primeiroNum= int(input('Digite o primeiro numero: '))
    segundoNum= int(input('Digite o segundo numero: '))
    print('O valor da soma é: ', primeiroNum/segundoNum)
    break
#POTENCIAÇÃO
while opcao == 5:
    primeiroNum= int(input('Digite o primeiro numero: '))
    segundoNum= int(input('Digite o segundo numero: '))
    print('O valor da soma é: ', primeiroNum**segundoNum)
    break