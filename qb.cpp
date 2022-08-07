#include <iostream>
using namespace std;
int main(){
//Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B. Apresentar a matriz C.
int MA[4][2], MB[4][2], MC[4][2];
  for (int i=0; i<4; i++){
    for( int j=0; j<2; j++){
      MA[i][j]=i+2;
      MB[i][j]=i+2;
    }
  }
 for(int k=0; k<4; k++){
    for(int l=0; l<2; l++){
      if(l%2==0){
      MC[k][l]=MA[k][l];
        }
      else{
         MC[k][l]=MB[k][l];
        }
      cout << MC[k][l] << " ";
      }
   cout << endl;
   }
  cout << endl;
  return 0;
  }