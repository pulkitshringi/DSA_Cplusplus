#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.emplace_back(33); // insertion
    arr.emplace_back(64);
    arr.emplace_back(43); 

   cout << "Vector size : " <<  arr.size() << endl; 
   vector<int>::iterator itrBeg = arr.begin();
   vector<int>::iterator itrEnd = arr.end();


    return 0;
}