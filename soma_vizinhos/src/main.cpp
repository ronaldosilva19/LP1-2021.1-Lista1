/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, i;
    
    int soma = 0;
    while(cin >> std::ws >> m >> n){
        if(m < 0 && n < 0){
            for(i = m; i > m + n; i--){
                soma = soma + i;
            }
        }else if(m < 0 && n > 0){
            for(i = m; i < m + n ; i++){
                soma = soma + i;
            }
        }else if(m > 0 && n < 0){
            for(i = m; i > m + n; i--){
                soma = soma + i;
                }
            }else if(m > 0 && n > 0){
                for(i = m; i < m + n; i++){
                    soma = soma + i;
                }
        }else if((m > 0 || m < 0) && n == 0){
            for(i = m; i <= m + n; i++){
                soma = soma + i;
            }
        }
        
        cout<<soma<<endl;
        soma = 0;
    }

    return 0;
}
