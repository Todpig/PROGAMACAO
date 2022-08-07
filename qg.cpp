//Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius. Construir a matriz B de mesma dimensão, em que cada elemento seja o valor datemperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar ao final as matrizes A e B.
#include <iostream>
using namespace std;
int main(){
float A[4][5], B[4][5];
  for(int linha=0; linha<2; linha ++){
    for(int coluna=0; coluna<2; coluna++){
      cout << "Digite a temperatura em graus celsius: " << endl;
      cin >> A[linha][coluna];
    }
  }
  for(int linha=0; linha<2; linha++){
    for(int coluna=0; coluna<2; coluna++){
      B[linha][coluna] = (9*A[linha][coluna]/5) + 32;  
    }
  }
  for(int linha=0; linha<2; linha++){
    for(int coluna=0; coluna<2; coluna++){
  cout << "A temperatura"<< coluna+1 << "em celsius é: " << A[linha][coluna]<< " " << endl;
      cout << "A temperatura" <<coluna+1 << "em fahrenheit é: " << B[linha][coluna]<< " " << endl;
      }
    }
  return 0;
}