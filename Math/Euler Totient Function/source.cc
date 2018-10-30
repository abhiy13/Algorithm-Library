#include <bits/stdc++.h>
  using namespace std;

long long phi(long long n){
  double res = n;
  for(int p = 2 ; p*p <= n ; ++p){
    if(n%p == 0){
      while(n%p == 0) n/=p;
      res -= res/p; 
    }
  }
  if(n > 1){
    res -= res / n;
  }
  return (long long)res;
}

int32_t main(){
  int N;
  cin >> N;
  cout << phi(N) << '\n';
}