//Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
int maior=30, menor=1;
  float A[5][5], soma[5], somatorio=0, cont=0;
  for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
  A[i][j] = rand ()%(maior-menor+1) + menor;
       if(i==j && i%2!=0){
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