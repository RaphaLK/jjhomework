#include <iostream>
#include <cmath>
using namespace std;

double 
add(double a, double b){
    return a+b;
}
double
divide(double a, double b){
    return a/b;
}
double 
multiply(double a, double b){
    return a*b;
}
double
subtract(double a, double b){
    return a - b;
};

int main(){
    double fno, sno, fr;
    int option;

//prompt for first and sec no. inputs
    cout << "Input your first number" << endl;
    cin >> fno;
    cout << "Input your second number" << endl;
    cin >> sno;

    cout << "Pick the type of calculation" << endl;
    cout << "1 : Addition" << endl;
    cout << "2 : Subtraction" << endl;
    cout << "3 : Multiplication" << endl;
    cout << "4 : Division" << endl;

    cin >> option;

    switch (option){
        case 1:
            fr = add(sno,fno);
            cout << fr;
        case 2:
            fr = subtract(sno,fno);
            cout << fr;
        case 3:
            fr = multiply(sno,fno);
            cout << fr;
        case 4:
            fr = divide(sno,fno);
            cout << fr;
    }
}