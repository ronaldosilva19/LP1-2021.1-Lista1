#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
   int tam = arr.size(); // Descobre o tamanho do vetor de strings.

  // Laço que inverte os valores das posiçoes do vetor.
    for(int i = 0; i < tam / 2; i++){
      std::swap(arr[i], arr[(tam - 1) - i]);
    }
}
