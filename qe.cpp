#include <iostream>
using namespace std;
int main(){
/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12 elementos reais. Construir uma matriz C de duas dimensões, sendo a primeira coluna da matriz C formada pelos elementos da matriz A multiplicados por 2 e a segunda coluna formada pelos elementos da matriz B subtraídos de 5. Apresentar separadamente as matrizes.*/

  int A[12], B[12], C[12][2];
  for (int i=0; i<5; i++){
      A[i]=i+10;
      B[i]=i+10;
    }
  for(int i=0; i<12; i++){
    C[i][0]=A[i]*2;
      C[i][1]=B[i]-5;
    cout << "|" << C[i][0] << "|" << C[i][1] << "|" << endl;
    }
  return 0;
  }