#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
    cout << "constructor" << endl;
    //ctor
}
MyClass::~MyClass()
{
    cout << "destructor" << endl;
}
