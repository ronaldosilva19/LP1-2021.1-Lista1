#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{int maior = 0; // Menor elemento do vetor.
    int menor = 0; // Maior elemento do vetor.
    int posicao_menor; // Primeira posição do menor elemento do vetor. 
    int posicao_maior; // Ultima posição do maior elemento do vetor. 

    pair<int, int> par; // Cria um objeto do tipo pair.

    if(n == 0){
         return { -1, -1 };
    }else{
      // Laço que procura o menor e maior elemento do vetor.
      for(int i = 0; i < n; i++){
              if(i == 0){
                  maior = V[i];
                  menor = V[i];  
              }else{
                  if(V[i] > maior){
                      maior = V[i];
                  }
                  
                  if(V[i] < menor){
                      menor = V[i];
                }
            }
        }
    }

  // Laço que procura a primeira ocorrencia do menor elemento do vetor.
    for(int j = 0; j < n; j++){
      if(V[j] == menor){
        // std::cout << "Posicao menor: " << j;
        posicao_menor = j;
        break; // sai do laço, porque encontrou.
      }
    }
      
    // Laço que procura a ultima ocorrencia do maior elemento do vetor.
    for(int k = 0; k < n; k++){
        if(V[k] == maior){
            posicao_maior = k;
            k = posicao_maior;
            
        }
    }

  // Adiciona as respectivas posições no objeto par.
    par.first = posicao_menor;
    par.second = posicao_maior;

   return par; // retorna as posições.
}
