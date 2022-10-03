#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Adicione seu código aqui.
    / Vefificar se os pontos formam um retanulo.
    if ((IE.x != SD.x && IE.y != SD.y) || IE.x + SD.x != IE.y + SD.y){

  // Retorna Dentro.
    if ((P.x > IE.x || P.x < SD.y) && P.y > IE.y) {
        if ((P.x < SD.x || P.x > SD.x) && P.y < SD.y) {
            return location_t::INSIDE; // retorna inside.
        }
    }

  // Retorna na Borda.
      if(P.x >= IE.x && P.x <= SD.x && P.y == IE.y){
        if(P.x >= IE.x && P.x <= SD.x && P.y == SD.y){ 
            if(P.y >= IE.y && P.y <= SD.y && P.x == IE.x){
              if(P.y >= IE.y && P.y <= SD.y && P.x == SD.y){
            return location_t::BORDER;  
            }
          } 
        }else if((P.x == IE.x && P.y == IE.y) || (P.x == SD.x && P.y == SD.y)){
            return location_t::BORDER; 
        }else if((P.x == IE.x && P.y == SD.y) || (P.x == SD.x && P.y == IE.y)) {
            return location_t::BORDER; 
        }
      }else{
         return location_t::OUTSIDE;
      }
    }
      // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return location_t::INVALID;

    return location_t::OUTSIDE;
}
