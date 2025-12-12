#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a; i<=b; i++)
 
int main(){
  int n;
  cin>> n;
   vector<bool>v(n+1);
  REP(i,0,n-1){
    int y;
    cin>>y;
    v[y] = true;
  }
  REP(x,1,n){
    if(!v[x]){
      cout<< x <<" ";
    }
  }
  return 0;
  
 }
 