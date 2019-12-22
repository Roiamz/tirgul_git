//
// Created by roi amzallag on 29/11/2019.
//
#include <iostream>
#include <string>
using namespace std;
class Person{
public:
    string name;
    int id;
    int age;
    Person()
    {
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Age: ";
        cin >> age;
    }
    virtual void Details()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
    }
};

