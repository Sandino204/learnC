#include<iostream>
#include<string>

using namespace std;

class Person {
    public: 
        string name;
};

class Student: public Person {
    public:
        int id;

    void print(){
        cout <<name<<endl;
    }

    Student(string n, int i){
        name = n;
        id = i;
    }
};

int main(){
    Student S1("Caio", 1);
    S1.name = "Caio";
    S1.id = 1;
    cout << S1.name<<endl;
    S1.print();

}