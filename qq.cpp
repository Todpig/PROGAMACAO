/*Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório
dos elementos da matriz C.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
srand(unsigned(time(0)));
  int A[4][5], B[4], C[5];
    int soma=0, somatorio=0;
    cout << "\nMATRIZ A\n" << endl;
    for(int i=0; i<4; i++){
      for(int j=0; j<5; j++){
        A[i][j] = rand()%30+1;
        cout << A[i][j] << " ";
      }
      cout << endl;
    }
     cout << "\nMATRIZ B\n" << endl;
    for(int i=0; i<4; i++){
      B[i] = 0;
      for(int j=0; j<5; j++){
        B[i]+=A[i][j];
        }
      soma +=B[i];
      cout << B[i] << " ";
      }
    cout << "\nMATRIZ C\n" << endl;
        for (int i=0; i<5; i++){ //percorre o vetor c
          C[i] = 0;
          for(int j=0; j<4; j++){  //percorre a linha da matriz A
            for(int k=0; k<5; k++){ //percorre a coluna da matriz A
              if(k==i){   //se a coluna de "A" for igual ao indice de "C" a soma incrementa, essa condiçao é para o vetor "C" receber aprenas a soma de uma coluna.
                C[i] += A[j][k];
             }  
          }
        }
          somatorio += C[i];
      cout << C[i] << " ";
      }  
    cout << " \nO valor do somatorio de B mais o somatorio de C é: " << somatorio+soma << endl;
  return 0;
}