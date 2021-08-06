/* algoritmo que desenha um retângulo usando for*/

#include <iostream>

using namespace std;

int main(){

    int width, height;
    char symbol;

    cout << "Enter the  Height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter the symbol: ";
    cin >> symbol;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++ ){
            cout << symbol;
        }
    cout<< " " << endl;

     }



}










