//Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15 colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da referida matriz.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
int maior=30, menor=1, A[15][15];
  int soma[15], somatorio, cont;
  for (int i=0; i<15; i++){
    for(int j=0; j<15; j++){
  A[i][j] = rand ()%(maior-menor+1) + menor;
      if(i==j && A[i][j]%2==0){
        soma[j] = A[i][j];
        cont++;
        }
      cout << A[i][j]<< " ";
      }
    cout << endl;
    }
  for(int i=0; i<cont; i++){
    somatorio += soma[i];
    }
cout << " \nO valor do somatorio é: " << somatorio << endl;
  return 0;
}