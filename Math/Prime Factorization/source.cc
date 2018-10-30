#include <bits/stdc++.h>
  using namespace std;

const int size = 1000010; // 10^6 + 10
vector <int> spf(size);
// intime Complexity : O(nloglogn) 
void init(){ 
  iota(spf.begin(), spf.end() , 0);
  for (int i = 4 ; i < size ;  i += 2) 
    spf[i] = 2; 
  for (int i = 3 ; i * i < size ; i++) { 
    if (spf[i] == i) { 
      for (int j = i * i ; j < size ;  j += i) 
        if (spf[j] == j) 
          spf[j] = i; 
    } 
  } 
} 

// A O(log n) function returning primefactorization  
vector<int> getF(int x){ 
  vector<int> factors; 
  while (x != 1) { 
    factors.push_back(spf[x]);
    x = x / spf[x]; 
  } 
  return factors; 
} 

int32_t main(){
  init();
  int N;
  cin >> N;
  vector <int> factors = getF(N); // gets prime factors for 1000;
  for(int x : factors){ // same as for(int i = 0 ; i < (int) factors.size() ; ++i)
    cout << x << ' ';   // same as cout << factors[i] << ' ';
  }
  cout << '\n';
  return 0;
}