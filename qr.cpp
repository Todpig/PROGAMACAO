/*Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo
triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos
elementos da matriz D. Apresentar a matriz E.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
srand(unsigned(time(0)));
   unsigned long int A[4], B[4], C[4], D[4], E[4][4], fact, x;
    for(int i=0; i<4; i++){
       A[i] = rand()%30+1;
       B[i] = rand()%30+1;
       C[i] = rand()%30+1;
       D[i] = rand()%30+1;
      }
    cout << "\nA matriz A" << endl;
    for(int i=0; i<4; i++){
      cout << A[i] << " ";
      }
    cout << "\nA matriz B" << endl;
    for(int i=0; i<4; i++){
      cout << B[i] << " ";
      }
    cout << "\nA matriz C" << endl;
    for(int i=0; i<4; i++){
      cout << C[i] << " ";
      }
    cout << "\nA matriz D" << endl;
    for(int i=0; i<4; i++){
      cout << D[i] << " ";
      }
    
     cout << "\nA matriz E" << endl;
      for(int j=0; j<4; j++){ //matriz E
        for(int k=0; k<4; k++){ //matriz E
          if(j==0){
        E[j][k]= A[k]*2;
            }
           if(j==1){
        E[j][k]= B[k]*3;
            }
          if(j==2){
        E[j][k]= C[k]*4;
            }
           if(j==3){
             x = D[k];
             for( int i=1; i<=x; i++){
               fact *= i;
             }
        E[j][k]= fact;
            }
          cout << E[j][k] << " ";
           }
        cout << endl;
         } 
   cout << endl;
    return 0;
  }