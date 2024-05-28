#include <iostream>
using namespace std;
bool eligible(int age){
    if(age>=18)
        return 1;
    else 
    return 0;
}
int main(){
    if(eligible(10))
    cout<<"Eligible"<<endl;
    else
    cout << "Not eligible"<<endl;
    return 0;
}