#include <iostream>
using namespace std;
int main (){
    char grade;
    cout << "Grade: ";
    cin >> grade;
    switch(grade){
        case'A':cout<<"A Grade"<<endl;
        break;
         case'B':cout<<"B Grade"<<endl;
        break;
         case'C':cout<<"C Grade"<<endl;
        break;
        default:cout<<"failed"<<endl;
    }
}