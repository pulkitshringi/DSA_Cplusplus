#include <iostream>
using namespace std;
int main(){
    int r;
    cin >> r;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){ //cols goes till curr Row No.
            cout << j+1 << " "; // current col index + 1
        }
        cout << endl;
    }
    return 0;
}