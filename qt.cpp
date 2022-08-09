/*8Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e cinco colunas. A matriz A deve ser formada por valores divisíveis por 3 e 4, enquanto a matriz B deve ser formada por valores divisíveis por 5 ou 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo usuário. Construir e apresentar a matriz C de mesma dimensão e número de elementos que contenha a subtração dos elementos da matriz A em relação aos elementos da matriz B.*/
#include <iostream>
#include <cstdlib>
using namespace std; 
int main(){
 srand(unsigned(time(0)));
  int A[4][5], B[4][5], C[4][5], x;
  for (int i=0; i<4; i++){
    for (int j=0; j<5; j++){
      while(true){
        cout << "Digite o numero da matriz a ";
        cin >> x;
        if (x%3==0 && x%4==0){
          A[i][j] = x;
        }
        break;
      }
      while(true){
        cout << "Digite o numero da matriz b ";
        cin >> x;
        if (x%5==0 || x%6==0){
          B[i][j] = x;
        }
        break;
      }
      C[i][j] = A[i][j] - B[i][j];
      }
    }
      for (int i=0; i<4; i++){
    for (int j=0; j<5; j++){
      cout << C[i][j] << " ";
      }
    cout << endl;
    }
  return 0;
  }
  