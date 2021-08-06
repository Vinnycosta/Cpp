#include <iostream>
using namespace std;

int main(){
    float height;
    float weight;

    cout << "Please tell me your height: "; 
    cin >> height;                           /* Obtendo valor de altura */
    cout << "Please, tell me your weight: ";
    cin >> weight;                           /* Obtendo valor de peso */

    float IMC = weight / (height * height);  /* Fórmula de IMC */

    cout<< "Your current IMC is: " << IMC << endl;

    if(IMC < 18.5){
         cout << "You are currently underweight.";
    }

    else if(IMC >= 18.5 and IMC <= 24.9){
         cout << "You are currently at normal weight.";
    }

    else{
         cout << "You are currently overweight.";
    }



}
