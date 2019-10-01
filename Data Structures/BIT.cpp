#include <bits/stc++.h>
using namespace std;
using ll = long long;

#define MAX 500005
ll bit[MAX];

ll query(int idx)
{
    ll sum = 0;
    while (idx) {
        sum += bit[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(ll idx,ll x){
   while (idx < MAX) {
        bit[idx] += x;
        idx += (idx & -idx);
    }
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i]);
    }
    ll q;
    cin >> q;
    while (q--) {
        ll choice;
        cin >> choice;
        if (choice)
        {
            ll l, r;
            cin >> l >> r;
            cout << query(r) - query(l-1) << endl;
        }
        else 
        {
            ll p; 
            ll x;
            cin >> p >> x; 
            update(p, x);
        }
    }
}
