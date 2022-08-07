//Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores situados na diagonal principal (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), os quais devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.
#include <iostream>
using namespace std;
  int main(){
int A[5][5], B[5][5];
    for(int i=0; i<2; i++){
      for(int j=0; j<2; j++){
        cout << "Digite um valor: " << endl;
        cin >> A[i][j];
      }
    }
    for(int i=0; i<2; i++){
      for(int j=0; j<2; j++){
        if(i==j){
          B[i][j]=A[i][j]*3;
        }
        else{
           B[i][j]=A[i][j]*2;
        }
        cout << "|" << B[i][j] << " " << "|";
        }
      cout << endl;
      }
    
    
    return 0;
  }