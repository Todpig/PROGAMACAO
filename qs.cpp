/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes Ae B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.*/
#include <iostream>
using namespace std; 
int main(){
  int A[5][6], B[5][6], C[5][6], x;
  for (int i=0; i<5; i++){
    for (int j=0; j<6; j++){
      while(true){
        cout << "Digite o numero da matriz a ";
        cin >> x;
        if (x%2==0){
          A[i][j] = x;
        }
        break;
      }
      while(true){
        cout << "Digite o numero da matriz b ";
        cin >> x;
        if (x%2!=0){
          B[i][j] = x;
        }
        break;
      }
      C[i][j] = A[i][j] + B[i][j];
      }
    }
  for (int i=0; i<5; i++){
    for (int j=0; j<6; j++){
      cout << C[i][j] << " ";
      }
    cout << endl;
    }
  return 0;
  }
  
   