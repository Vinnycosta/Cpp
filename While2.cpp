/*Algorítmo que verifica se a senha inserida é correta */

#include <iostream>

using namespace std;

int main(){
    int pinSys = 98765, pin, ErrorTimes = 0; /* A senha do sistema é adicionada antes do bloco de código */

    while(pin != pinSys){
    if(ErrorTimes <= 3){     /* Enquanto o número de erros não atinger o número 3, o bloco while irá pedir a senha */
         ErrorTimes++;
        cout << "Insert the pin to get into the system: ";
        cin >> pin;
            if(pin == pinSys){
                cout << "Correct Password !";
            }

            else if(ErrorTimes == 3){
             cout << "You have failed to get into the system."; /* Assim que a terceira tentaitva for executada, uma mensagem de erro aparecerá. */
             break;
            }
        }
    }
}
