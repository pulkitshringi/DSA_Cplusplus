#include <iostream>
using namespace std;
int binary(int no){
    int ans=0;
    int i = 0;
    while(no>0){
       int cur = no&1;
        ans = cur * pow(10,i++) + ans;
        no=no>>1;
    }
    return ans;
}
int main(){
cout << binary(11) << endl;
    return 0;
}