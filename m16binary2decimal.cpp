#include <iostream>
#include <cmath>
using namespace std;
int decimal(int n){
    int ans=0;
    int i = 0;
    while(n>0){
        int cur=n%10;
        ans=cur*pow(2,i++)+ans;
        n/=10;
    }
    return ans;
}
int main (){
    cout << decimal(1011) << endl;
    return 0;
}