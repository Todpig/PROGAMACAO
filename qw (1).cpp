/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores
situados na diagonal inversa (posições B[1,5], B[2,4], B[3,3], B[4,2] e B[5,1]), os quais devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.*/
#include <iostream>
#include <cstdlib>
using namespace std; 
int main(){
 srand(unsigned(time(0)));
  int A[5][5], B[5][5], C[5][5], x=0;
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
    A[i][j] = rand()%30+1;
         if((i+j)==4){
           B[i][j] = A[i][j]*3;
         }
         else{
           B[i][j] = A[i][j]*2;
         }
      cout << B[i][j] << " ";
      }
    cout << endl;
    }
    return 0;
    }