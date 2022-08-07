//Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco linhas e cinco colunas. Apresentar o somatório dos elementos situados na diagonal principal (posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da referida matriz.
#include <iostream>
using namespace std; 
int main(){
float A[5][5], soma[5], somatorio;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout << "Digite o valor: "<< endl;
      cin >> A[i][j];
      if(i==j){
        soma[j] = A[i][j];
      }
    }
  }
  for(int i=0; i<3; i++){
    somatorio += soma[i];
    }
cout << " \nO valor do somatorio é: " << somatorio << endl;
  return 0;
}