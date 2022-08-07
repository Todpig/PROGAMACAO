#include <iostream>
using namespace std;
int main(){
//Elaborar um programa que leia uma matriz A de duas dimensões com seis linhas e cinco colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo: para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz A deve ser subtraído 4. Apresentar ao final as matrizes A e B.
  int A[6][5], B[6][5];
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout << "digite o valor: "<< endl;
      cin >> A[i][j];
    }
  }
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      if(A[i][j]%2==0){
        B[i][j]=A[i][j]+5;
        }
      else{
        B[i][j]=A[i][j]-4;
      }
      }
    }
  cout << "Matriz A" << endl;
  cout << "__________" << endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout << A[i][j] << " ";
      }
    cout << endl;
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