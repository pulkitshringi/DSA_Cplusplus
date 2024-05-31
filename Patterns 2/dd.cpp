#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
           char a = 'A';
        for(int j=0;j<i+1;j++){
            cout << a;
            a++;
        }
        a--;
          for(int j=0;j<i;j++){
            a--;
            cout << a;
        }
        cout << endl;
    }
    return 0;
}