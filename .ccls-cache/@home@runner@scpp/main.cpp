#include <iostream>
#include <string>

using namespace std;

int solve(string str){
  int nn = 0;
  if(str == "MOO"){
    return 0;
  }
  if(str.length()<=2 and str != "MOO"){
    return -1;
  }
  nn = str.length()-2;
  return nn;
}

int main() {
  int n;
  cin>>n;
  string str[n];
  for(int i = 0; i<n; i++){
    cin>>str[i];
    cout<<solve(str[i]);
  }
}