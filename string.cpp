#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "hello", name;
    cout<<"write your name"<<endl;
    cin>>name;
    cout<<s<<" "<<name<<endl<<"Your name has "<<name.length()<<" characters"<<endl;
}