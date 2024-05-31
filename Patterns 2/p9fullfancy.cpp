#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==i)
            cout << i+1;
            else
            cout << i+1 << "x";
        }
        cout << endl;
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j+1==n-i)
            cout << n-i;
            else
            cout << n-i << "x";
        }
        cout << endl;
    }
    return 0;
}