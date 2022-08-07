#include <iostream>
using namespace std;
int main(){
//Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a matriz.
int M[4][5];
  for (int i=0; i<4; i++){
    for( int j=0; j<5; j++){
      M[i][j]=i+2;
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
  }