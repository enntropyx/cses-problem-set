// char string bluf[n];
//cin>> string input man me- acgt highr num
//sum per head - cout<<max sum
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
int main() {
  string s;
  cin>>s;
  int n= s.length();
  int line =0;
  int sol=0;
  REP(i,0,n){
    if( i!=0 && s[i-1]==s[i-1]){
      line++;
    }
    else{
      sol=max(sol, line);
      line=0;
    }
  }
  sol=max(sol, line);
  cout<<sol<<endl;
  

}