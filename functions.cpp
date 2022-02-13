#include<iostream>
#include<string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

double div(double a, double b) {
    return a / b;
}

int main(){
    int a, b;
    cout<<"a: "<<endl;
    cin >> a;
    cout<<"b: "<<endl;
    cin >> b;

    cout<<"The sum is: "<<add(a, b)<<endl;
    cout<<"The division is: "<< div(3.5, 3.5)<<endl;
}