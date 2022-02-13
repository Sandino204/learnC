#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age for vaccination"<<endl;
    cin >> age;
    if(age > 100 || age < 0){
        cout<<"Invalid age"<<endl;
    }else if(age > 18){
            cout<<"you are elegible for vaccination"<<endl;    
    }else{

        cout<<"you are not elegible for vaccination"<<endl;
    }

    
}