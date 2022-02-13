#include<iostream>
#include<string>

using namespace std;

int main(){
    int x[6];
    for(int i = 0; i < 6; i++){
        x[i] = i;
    }

    for(int i = 0; i < 6; i++){
        cout << x[i] << endl;
    }
}