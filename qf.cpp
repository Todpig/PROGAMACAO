#include <iostream>
using namespace std;
int main(){
/*Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes A e B.*/
  
unsigned long int A[5][4], B[5][4], x=0, fact=1;
  for(int linha=0; linha<5; linha++){
    for(int coluna=0; coluna<4; coluna++){
      A[linha][coluna]=linha+1;
      x=A[linha][coluna];
      }
    }
      for( int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<4; coluna++){
          x = A[linha][coluna];
          for(int i=1; i<=x; i++){
            fact*=i;
          }
          B[linha][coluna]=fact;
          cout << "|" << A[linha][coluna] <<"|"<< B[linha][coluna] <<"|"<< endl;
          fact=1;   
        }   
      }
 return 0;
    }