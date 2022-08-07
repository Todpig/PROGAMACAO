//Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
int maior=30, menor=1;
  float A[8][6], B[8], somatorio=0, soma; 
  cout << "\nMATRIZ A" << endl;
  cout << "___________________" << endl;
  for (int i=0; i<8; i++){
    for(int j=0; j<6; j++){
  A[i][j] = rand ()%(maior-menor+1) + menor;
      for(int m=0; m<8; m++){
      soma += A[m][j];
        }
      cout << A[i][j] << " ";
      }
    cout << endl;
  } 
  cout << "\nMATRIZ B" << endl;
  cout << "___________________" << endl;
  for (int i = 0; i<8; i++){
        soma = 0;
        for(int j = 0; j<6; j++){
            soma = soma + A[i][j];
        }
        B[i] = soma;
     cout << B[i] << " ";
    }
  cout << "\nO VALOR DO SOMATÓRIO É: " << endl;
  for(int i=0; i<8; i++){
    somatorio += B[i];
  }
  cout << somatorio << endl;
  return 0;
  }
