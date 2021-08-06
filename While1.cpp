/* Esse algoritmo simples busca os números divisíveis por 3 e 5 no range de 100 - 500 */

#include <iostream>
using namespace std;

int main(){
    int counter = 100; 

    while(counter >= 100 && counter <= 500 ){
        counter = counter +1;
            if(counter % 3 == 0 && counter % 5 == 0){
                cout << counter << ", ";

            }
    }
}
