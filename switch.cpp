#include<iostream>
using namespace std;
int main(){
    int data;
    cin >> data;
    switch(data){
        case 18:
            cout << "You type the right content";
            break;
        case 20:
            cout << "You type the 20";
        default:
            cout << "You wrong data";
    }
}