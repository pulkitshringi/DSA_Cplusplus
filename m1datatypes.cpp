#include <iostream>
using namespace std;
int main(){
   int age=25;
   cout << "int age : "<< age;
   cout << " size: "<< sizeof(age) << endl;;

   char c = 's';
    cout << "char c : " << c;
   cout << " size : " << sizeof(c) << endl;;

   float f = 2.15;
      cout  << "float f : " << f;
      cout << " size : "<< sizeof(f) << endl;;

    double d = 5645.34999;
    cout << "double d : " << d;

    cout << " size : " << sizeof(d) << endl;

    bool b = false;
    cout << "bool b : " << b;
    cout << " Size : " << sizeof(b) << endl;
    }
