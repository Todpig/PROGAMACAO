/*Deseja-se atualizar as contas correntes dos clientes de uma agência bancária. É dado o cadastro de n clientes contendo para cada cliente o número de sua conta e o seu saldo; o cadastro está ordenado pelo número da conta. Em seguida, é dado o número de operações efetuadas no dia e, para cada operação, o número da conta, uma letra C ou D indicando se a operação é de crédito ou débito e o valor da operação . Emitir o cadastro de clientes
atualizado.*/
#include <iostream>
using namespace std;
int main(){
   string nome[30], operacao;
  int saldo[5], n, numeroconta[6], noperacao=0, valor[5], opcao;
  cout << "Digite o numero de clientes: ";
  cin >> n;
  while(true){
    cout << "Qual opreçao deseja fazer? "<< endl;
    cout << "[1] Cadastrar cliente(s); \n [2]Numero de operaçoes realizadas; \n [3]Emitir cadastro de cliente" << endl;
  cin >> opcao;
  while(opcao==1){
     for (int i=0; i<n; i++){
      cout << "Digite o nome do cliente: "<< i+1 << endl;
      cin >> nome[i];
      cout << "Digite o numero da conta: ";
      cin >> numeroconta[i];
      cout << "Digite o saldo do cliente: ";
      cin >> saldo[i];
      }
    break;
  }
  while(opcao==2){
for (int i=0; i<n; i++){
    cout << "Qual operação o cliente " << nome[i] << " quer fazer?([C] Credito; [D] Débito)";
   cin >> operacao;
    while(operacao=="c"){
      noperacao++;
      cout << "Qual o valor da operação? " ;
      cin >> valor[i];
       cout << numeroconta[i] << "C" << valor[i] << endl;
    break;
    }
     while(operacao=="d"){
      noperacao++;
      cout << "Qual o valor da operação? " ;
      cin >> valor[i];
      cout << numeroconta[i] << "D" << valor[i] <<  endl;
    break;
    }
   
  cout << "O numero de operações feitas hoje é " << noperacao <<endl;
  }
    break;
    }
    while(opcao==3){
      cout << "O cadastro atualizado" << endl;
      cout << "________________________" << endl;
      for (int i=0; i<n; i++){
      cout << "\nCliente: " << nome[i] << "\nNumero da conta: " << numeroconta[i] << "\nSaldo: " << saldo[i] << endl;
    }
    break;
    }
    }
  return 0;
  }
 