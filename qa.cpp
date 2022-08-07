#include <iostream>
using namespace std;
int main(){
//Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.
int MA[5][3], MB[5][3], MC[5][3];
  for (int i=0; i<5; i++){
    for( int j=0; j<3; j++){
      MA[i][j]=i+2;
      MB[i][j]=i+2;
    }
  }
  for(int k=0; k<5; k++){
    for(int l=0; l<3; l++){
      MC[k][l]=MA[k][l]+MB[k][l];
       cout << MC[k][l] << " ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}