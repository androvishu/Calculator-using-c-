#include<iostream>
using namespace std;
void sum(){
    cout << "Addition mode is start now." << endl;
    int a, b;
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Addition : " << (a + b);
}
void sub(){
    cout << "Subtraction mode is start now." << endl;
    int a, b;
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Subtration : " << (a - b);
}
void mul(){
    cout << "Multiplication mode is start now." << endl;
    int a, b;
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Multiplication : " << (a * b);
}
void div(){
    cout << "Division mode is start now." << endl;
    int a, b;
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter num2 : ";
    cin >> b;
    cout << "Division : " << (a / b);
}
void sqr(){
    cout << "Square mode is start now." << endl;
    int a, b, c = 1;
    cout << "Enter num1 : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;
    for(int i = 1; i <= b; i++){
        c = c * a;
    }
    cout << "squre : " << c; 
}


int main(){
    cout << "Calculater is start now : " <<  endl;
    int s = 1;
    int n = 1;
    while (n != 0){
        cout << "Default calculater start addition mode." << endl;
        cout << "Enter mode of calculation : ";
        cin >> s;
        if (s == 1){
            sum();
        }
        else if (s == 2){
            sub();
        }
        else if (s == 3){
            mul();
        }
        else if (s == 4){
            div();
        }
        else if (s == 5){
            sqr();
        }

        cout << endl << "if continue enter 1 otherwise 0 : ";
        cin >> n;
        cout << endl;
    }
    
}


