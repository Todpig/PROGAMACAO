/*Elaborar um programa que faça a leitura de duas matrizes A e B de duas dimensões com cinco linhas e cinco colunas. A matriz A deve ser formada por valores que não sejam divisíveis por 3, enquanto a matriz B deve ser formada por valores que não sejam divisíveis por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo usuário. Construir e apresentar uma matriz C de mesma dimensão e número de elementos que contenha a soma dos elementos das matrizes A e B.*/
#include <iostream>
using namespace std; 
int main(){
 
  int A[5][5], B[5][5], C[5][5], x;
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      while(true){
        cout << "Digite o numero da matriz a ";
        cin >> x;
        if (x%3!=0){
          A[i][j] = x;
        }
        break;
      }
      while(true){
        cout << "Digite o numero da matriz b ";
        cin >> x;
        if (x%6!=0){
          B[i][j] = x;
        }
        break;
      }
      C[i][j] = A[i][j] + B[i][j];
      }
    }
      for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
      cout << C[i][j] << " ";
      }
    cout << endl;
    }
  return 0;
  }
