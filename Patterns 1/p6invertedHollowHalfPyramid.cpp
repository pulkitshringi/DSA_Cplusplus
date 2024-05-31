#include <iostream>
using namespace std;
int main(){
    int r;
    cin >> r;
    for(int i=0;i<r;i++){
        for(int j=0;j<r-i;j++){
            if(i==0||i==r-1||j==0||j==r-i-1){
                cout << "*";
            }
            else
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}