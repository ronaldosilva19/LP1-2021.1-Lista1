#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.

     Ponto inferior = {};
    Ponto superior = {};

  // Vefificar se os pontos formam um retanulo.
    if ((IE.x != SD.x && IE.y != SD.y) || IE.x + SD.x != IE.y + SD.y){
        if(IE.y < SD.y){
          inferior.x = IE.x;
          inferior.y = IE.y;
          superior.x = SD.x;
          superior.y = SD.y;
        }else if(IE.y > SD.y){
          inferior.x = SD.x;
          inferior.y = SD.y;
          superior.x = IE.x;
          superior.y = IE.y;
        }

  // Retorna Dentro.
    if ((P.x > inferior.x || P.x < superior.y) && P.y > inferior.y) {
        if ((P.x < superior.x || P.x > superior.x) && P.y < superior.y) {
            return location_t::INSIDE; // retorna inside.
        }
       }

  // Retorna na Borda.
      
    if(P.x >= inferior.x && P.x <= superior.x && P.y == inferior.y){
        if(P.x >= inferior.x && P.x <= superior.x && P.y == superior.y){ 
            if(P.y >= inferior.y && P.y <= superior.y && P.x == inferior.x){
              if(P.y >= inferior.y && P.y <= superior.y && P.x == superior.y){
            return location_t::BORDER;  
            }
          } 
        }else if((P.x == inferior.x && P.y == inferior.y) || (P.x == superior.x && P.y == superior.y)){
            return location_t::BORDER; 
        }else if((P.x == inferior.x && P.y == superior.y) || (P.x == superior.x && P.y == inferior.y)) {
            return location_t::BORDER; 
        }
      }else{
         return location_t::OUTSIDE;
      }
    }
      // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
   return location_t::INVALID;
}
