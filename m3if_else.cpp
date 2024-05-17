#include <iostream> 
using namespace std;
int main (){
    int budget;
    cout << "Enter your budget : ";
    cin >> budget;
    if(budget>20000){
        cout << "you can buy volvo :) " << endl;
    }
    else if(budget>10000){    
        cout << "you can't buy too lol " << endl;
    }
    else if(budget>5000){
        cout << ("Don't event try") << endl;
    }
}