#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int quant_negativos = 0;
    int numero;
    for(int i = 0; i < SIZE; i++){
        std::cin>>numero;
        if(numero < 0){
            quant_negativos++;
        }
    }
  cout<<quant_negativos;

    return 0;
}
