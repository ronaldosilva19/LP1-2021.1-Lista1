#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> vetor {1, 1}; // Criando o objeto vetor com os 2 primeiros
    // valores da sequencia de Fibonacci .
  
  // Variaveis que servirao para descobrir os valores dos termos da 
  // sequencia de Fibonacci. 
  int primeiro = 1; 
  int segundo = 1;
  int terceiro;

  bool saiu = false; // Serve para sair do laço mais externo.
  int i = 2;  // Iniciar o laço while a partir do segundo elemento.

  if (n < 2){ // Caso o valor informado seja menor que 2, retorna um objeto vector vazio.
    return {};
  }else if(n == 2){
    return {1, 1}; // Se o valor informado for igual a 2, retorna um objeto vector 
      // com os valores menores que 2, ou seja, {1, 1}.
  }else{

      // Caso seja maior que 2, o laço while adiciona os elementos da sequencia
      // de Fibonacci no vetor, a partir do segundo elemento.
      // Logo em seguida, troca as variaveis para usa-las na próxima iteração. 
      while(i < n){
        terceiro = primeiro + segundo;
        vetor.push_back(terceiro);
        primeiro = segundo;
        segundo = terceiro;

        // Este laço mais interno percorre o vetor e verifica se tem algum
        // elemento maior ou igual ao valor informado pelo usuário, caso seja,
        // remove ele e muda a variável saiu para true.
        // Na próxima condicional compara a variável saiu e caso seja verdadeira, 
        // sai do laço while. 
        for(int j = 0; j < vetor.size(); j++){
          if (vetor[j] >= n){
            vetor.pop_back();
            saiu = true;
          }
        }
         i++;
        
        if (saiu != false){
            break;
          }
          
      }
  }
  
    return vetor; // retorna o objeto vetor.
}
