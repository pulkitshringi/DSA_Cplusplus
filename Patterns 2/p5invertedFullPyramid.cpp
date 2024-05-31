#include <iostream>
using namespace std;

void invertedHollow(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout << " "; // empty space
    }
    for(int j=0;j<n-i;j++){
        if(j==0||i==0||i==n-1||j==n-i-1){ //firstcol,firstrow,lastrow,lastcol
            cout << "* ";
        }
        else
        cout << "  "; // two spaces
    }
    cout << endl;
}
}
int main(){
    int n;
    cin >> n;
    invertedHollow(n);
    return 0;
}