//Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete linhas e sete colunas. Construir a matriz B de mesma dimensão, em que cada elemento seja o somatório de 1 até o valor armazenado na posição da matriz A, com exceção dos valores situados nos índices ímpares da diagonal principal (B[1,1], B[3,3], B[5,5] e B[7,7]), os quais devem ser o fatorial de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.
#include <iostream>
using namespace std;
int main(){
int A[7][7], B[7][7], soma=0, x, fact=1;
  for(int i=0; i<2; i++){
      for(int j=0; j<2; j++){
        cout << "Digite um valor: " << endl;
        cin >> A[i][j];
      }
    }
    for(int i=0; i<2; i++){
      for(int j=0; j<2; j++){
         x=A[i][j];
        if(i==j && x%2!=0){
          for (int k=1; k<=x; k++){
            fact *= k;
          }
          B[i][j] = fact; 
          fact=1;
        }
          else {
          for (int k=0; k<=x; k++){
            soma += 1;
          }
            B[i][j] = soma; 
            soma = 0;
          }
        }
      }
     cout << "Matriz B" << endl;
  cout << "__________" << endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout << B[i][j] << " ";
      }
    cout << endl;
    }
  return 0;
}