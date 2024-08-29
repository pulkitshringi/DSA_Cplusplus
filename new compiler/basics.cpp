#include <bits/stdc++.h>
using namespace std;
int main(){
set<int> st;
st.insert(43);
st.insert(12);
st.insert(15);
st.insert(15);
st.insert(2);
auto it = st.upper_bound(2);
if(it!=st.end()){
  cout << *it;
}
else{
  cout << "no element";
}

return 0;
}