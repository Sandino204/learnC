#include<iostream>
#include<string>

using namespace std;

int main(){
    int end = 0;
    for(int i = 0; i < 10; i++){
        cout << i <<endl;
    }

    while(end != 10){
        cout <<"for end the loop type 10"<<endl;
        cin >> end;
    }
}