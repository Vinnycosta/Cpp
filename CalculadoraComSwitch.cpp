#include <iostream>
using namespace std;

int main(){
    
    float num1, num2;
    char operador;

    cout << "Please, input a calculation: ";   /* Obtendo os dois números e a operação que será realizada entre eles */
    cin >> num1 >> operation >> num2;

    switch (operation){
        case '+': 
            system("clear");
                cout << num1 << " " << operation << " " << num2 << "=" << num1 + num2;  /* Caso Soma */
                    break;
        case '-':
            system("clear");
                cout << num1 << " " << operation << " " << num2 << "="<< num1 - num2; /* Caso Subtração */
                    break;

        case '*': 
            system("clear");
                cout << num1 << " " <<  operation << " " << num2 << "=" << num1 * num2; /* Caso Multiplicação */
                    break;
        break;

          case '/': 
            system("clear");
                cout << num1 << " " << operation << " " << num2 << "=" << num1 / num2; /* Caso Divisão */
                    break;
        break;

        case '%':
            bool num1int, num2int;
            num1int = int(num1) == num1;
            num2int = int(num2) == num2;    /* Caso module possui um algorítimo para verificar se o número inserido é inteiro, pois não
                                               se pode tirar module de dados númericos do tipo float, double, etc. */
          

            if(num1int && num2int){
                cout << num1 << " " << operation << " " << num2 << " = " << int(num1) % int(num2);

            }

            else{
                cout << "Invalid operation";
            }

        
        break;

    }
