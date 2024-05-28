#include <iostream>
using namespace std;
int main(){
    int f =0;
    int s=1;
    int temp=0;
    for(int i =0;i<10;i++){
        cout << f+s << endl;
        temp=s;
        s=f+s;
        f=temp;   
    }
    return 0;
}