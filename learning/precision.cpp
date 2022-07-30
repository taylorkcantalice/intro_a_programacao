#include <iostream> // cin e cout

using namespace std;

int main(){
  
  double raio; // declaro a variável raio
  
  cin >> raio; // leio o valor na tela e salvo em raio
  
  double pi; // declaro a variável pi
  
  pi=3.14159; // faço pi receber o valor de 3.14159
  
  cout.precision(2); // indico a precisão que eu quero na saída
  cout.setf(ios::fixed);

  cout << "A area eh " << raio*raio*pi << "\n"; // imprimo a frase "A area eh " seguida do valor da área
                                          // com precisão de duas casas decimais e a quebra de linha
  
  return 0;
}