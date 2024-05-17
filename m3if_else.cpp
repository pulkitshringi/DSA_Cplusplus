#include <iostream> 
using namespace std;
int main (){
    int x;
    cout << ("Enter x : ");
    cin >> x;
    if(x>20){
        if (x==30){
            cout << ("x equal to 30") << endl;
        }
        else {
            cout << ("x not equal to 30") << endl;
        }
    }
    else {
        cout << ("x is less than 20") << endl;
    }
}