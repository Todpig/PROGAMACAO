//Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e setecolunas. Ao final, apresentar o total de elementos pares existentes na matriz.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
int maior=30, menor=1, A[15][15];
  int cont=0;
  for (int i=0; i<15; i++){
    for(int j=0; j<15; j++){
  A[i][j] = rand ()%(maior-menor+1) + menor;
      if(A[i][j]%2==0){
        cont++;
        }
      cout << A[i][j] << " ";
      }
    cout << endl;
    }
  cout << "A quantidade de numeros pares na matriz é: " << cont << endl;
  return 0;
  }