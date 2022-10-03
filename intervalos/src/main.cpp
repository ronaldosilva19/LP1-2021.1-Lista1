/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int x;
    double Intervalo_0_24 = 0;
    double Intervalo_25_49 = 0;
    double Intervalo_50_74 = 0;
    double Intervalo_75_99 = 0;
    double ForaIntervalo = 0;
    
        while(cin >> std::ws >> x) {
            if(x >= 0 && x < 25){
                Intervalo_0_24++;
            
        }
        else{
        if(x >= 25 && x < 50){
                Intervalo_25_49++;
            
        }else if(x >= 50 && x < 75){
                Intervalo_50_74++;
                
            }else if(x >= 75 && x < 100){
                Intervalo_75_99++;
                
            }else if(x < 0 || x >= 100){
                ForaIntervalo++;
            }
        }    
    }
    
    double somaQuantdigitada = Intervalo_0_24 + Intervalo_25_49 + 
    Intervalo_50_74 + Intervalo_75_99 + ForaIntervalo;
    
    cout<<setprecision(4)<<((Intervalo_0_24 * 100) / somaQuantdigitada)<<endl;
    cout<<setprecision(4)<<((Intervalo_25_49 * 100) / somaQuantdigitada)<<endl;
    cout<<setprecision(4)<<((Intervalo_50_74 * 100) / somaQuantdigitada)<<endl;
    cout<<setprecision(4)<<((Intervalo_75_99 * 100) / somaQuantdigitada)<<endl;
    cout<<setprecision(4)<<((ForaIntervalo * 100) / somaQuantdigitada)<<endl;


    return 0;
}
