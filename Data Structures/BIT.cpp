#include <bits/stc++.h>
using namespace std;
using ll = long long;

// T can be any datatype
using T = int;
vector<T> bit;

T query(int idx) {
    T sum = 0;
    while (idx) {
        sum += bit[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx, T x){
   int bound = (int) bit.size();
   while (idx <= bound) {
        bit[idx] += x;
        idx += (idx & -idx);
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    bit.resize(n);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i]);
    }
    int q; cin >> q;
    while (q--) {
        int choice;
        cin >> choice;
        if (choice) {
            int l, r;
            cin >> l >> r;
            cout << query(r) - query(l - 1) << endl;
        } else {
            int p; T x;
            cin >> p >> x; 
            update(p, x);
        }
    }
}
