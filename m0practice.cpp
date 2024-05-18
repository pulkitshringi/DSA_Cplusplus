#include <iostream> 
using namespace std;
void party(){
    cout << "Balle Balle" << endl;
}
namespace pulkit{
    void party(){
        cout << "Nacho Nacho" << endl;
    }
}
int main(){
party();
pulkit::party();
}