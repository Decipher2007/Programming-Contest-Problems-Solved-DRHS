#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#include <iostream>
#include <string>

using namespace std;

#define ll long long

/*

Prefix Sums: pref[i] = pref[i-1] + m[i-1];
Prefix Sums: pref[i+1] = pref[i] + m[i];
Prefix Sums: pref[R+1] - pref[L];

*/

/*

Try to use dynamic programming.

*/

/*
abc - YES
acb - YES
bac - YES
bca - NO
cab - NO
cba - YES

*/



void solve() {
  
  
  
}
  

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 
  ios::sync_with_stdio(0);
  cin.tie(0);
 
 
 
  /*ll t;
  cin >> t;
 
  while (t--) {
    solve();
  }*/

  // This problem requires us to swap the element (given in the query) in the array with the element preceding it in index.

  ll n, q;
  cin >> n >> q;

  ll m[n];

  for (ll i = 0; i < n; i++) {
    cin >> m[i];
  }

  for (ll i = 0; i < q; i++) {
    ll x;
    cin >> x;

    for (ll j = 0; j < n; j++) {
      if (m[j] == x && j != 0) {
        // Swapping. You can't swap an element that is at the first index since there is no element preceding it. 
        m[j] = m[j-1];
        m[j-1] = x;
      }
    }
  }

  // Output for array.
  for (ll i = 0; i < n; i++) {
    cout << m[i] << " ";
  }


 
 
  
 
}


