#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
char palavra[30], letra[1], secreta[30];
  int tam, i, chances, acertos;
  bool acerto;
  chances=5;
  tam=0;
  i=0;
  acerto=false;
  acertos=0;
  cout << "Digite a palavra para começar o jogo: " << endl;
  cin >> palavra;
  system ("clear");
  while(palavra[i] != '\0'){
    i++;
    tam++;
  }
for( i=0; i<30; i++){
secreta[i]='-';
}
while((chances>0)&&(acertos<tam)){
  cout << "Chances restante: " << chances << endl;
  cout << "Palavra secreta: ";
  for(i=0; i<tam; i++){
    cout << secreta[i];
  }
  cout << "\nDigite uma letra: " << endl;
  cin >> letra[0];
  for(i=0; i<tam; i++){
    if(palavra[i]==letra[0]){
      acerto=true;
      secreta[i]=palavra[i];
      acertos++;
    }
  }
  if(!acerto){
    chances--;
  }
  acerto=false;
  system("clear");
}
  if(acertos==tam){
    cout << "Parabens! Você venceu." << endl;
  }
  else{
    cout << "É uma pena. Você perdeu!" << endl;
  }
system("pause");
  return 0;
}