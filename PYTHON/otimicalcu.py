print('_____________CALCULADORA______________')
print('Digite a operação a ser feita')
print('\n [1] Soma \n [2] Subtração \n [3] Multiplicção \n [4] Divisão \n [5] potenciação') 
opcao = int(input('Digite sua opção: ')) #escolha da operação

primeiroNum= int(input('Digite o primeiro numero: '))
segundoNum= int(input('Digite o segundo numero: '))

if opcao == 1:
 print('A soma de ', primeiroNum, " + ", segundoNum, " = ", (primeiroNum + segundoNum))
elif opcao == 2:
 print('A subtração de ', primeiroNum, " - ", segundoNum, " = ",(primeiroNum - segundoNum))
elif opcao == 3:
 print('A multiplicação de ', primeiroNum, " * ", segundoNum, " = ",(primeiroNum * segundoNum))
elif opcao == 4:
 print('A divisão de ', primeiroNum, " / ", segundoNum, " = ",(primeiroNum / segundoNum))
else:
 print('A potenciação de ', primeiroNum, " ** ", segundoNum, " = ",(primeiroNum ** segundoNum))