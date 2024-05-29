#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout << "Enter rows : ";
    cin >> r; 
    cout << "Enter cols : ";
    cin >> c;
    for(int i =0;i<r;i++){
        for (int j =0;j<c;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}