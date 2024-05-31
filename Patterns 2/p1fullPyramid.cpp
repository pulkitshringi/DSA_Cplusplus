#include <iostream>
using namespace std;

void fullPyramid(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){ // empty space logic
            cout << " "; 
        }
    for(int j=0;j<=i;j++){ // * logic
        cout << "* ";
    }
    cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
   fullPyramid(n);
    return 0;
}
                                         