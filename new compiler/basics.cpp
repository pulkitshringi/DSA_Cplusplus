#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> vec = {23,12,3,4,4,34,23,4};
  auto four = find(vec.begin(),vec.end(),4);
  cout << *four << endl;
  cout <<  "Index : " << distance(vec.begin(),four);
return 0;
}