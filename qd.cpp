#include <iostream>
using namespace std;
int main(){
//Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros. Construir uma matriz C de duas dimensões com três colunas, sendo a primeira coluna da matriz C formada pelos elementos da matriz A somados com 5, a segunda coluna formada pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A e a terceira e última coluna pelos quadrados dos elementos correspondentes da matriz A. Apresentar a matriz C.
  //PREENCHENDO A MATRIZ "A"
int A[10], C[10][3], fact=1, x=0;
  for (int i=0; i<10; i++){
      A[i]=i+2;
  }
  //PRIMEIRA COLUNA RECEBE O ELEMNETO DE "A" * 5
    for( int i=0; i<10; i++){
      C[i][0] = A[i]+5;
      //SEGUNDA COLUNA RECEBE FACTORIAL DOS ELEMENTOS DE "A"
    x = A[i];
      for(int j=1; j<=x; j++){
        fact *= j;
      }
      C[i][1] = fact;
      //TERCEIRA COLUNA RECEBE O QUADRADO DOS ELEMNTOS DE "A"
      C[i][2] = A[i]*A[i];
      cout <<"|" << C[i][0] <<"|" << "|"<< C[i][1] << "|"<< "|"<< C[i][2] << "|"<< endl;
      fact=1;
      }
  return 0;
  }