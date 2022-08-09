/*Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz. Apresentar também o percentual de elementos pares e ímpares em relação ao total de elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares, haveria 28,6% de elementos pares e 71,4% de elementos ímpares.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  srand(unsigned(time(0)));
  int A[10][7];
  float  par=0, impar=0;
    for (int i=0; i<10; i++){
       for(int j=0; j<7; j++){
        A[i][j] = rand()% 30 +1;
         if(A[i][j]%2==0){
           par++;
         }else{
           impar++;
         }
      }
    }
  cout << "Existe(m) " << par << " par(es) e " << impar << " impar(es)" << endl;
cout << "O percentual de pares e impares respectivamente é: " << ((par*100)/70) << "%" << " e " << ((impar*100)/70) << "%" << endl;
  return 0;
}