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
    ll n;

    cin >> n;

    ll m[n];
    // n+1 includes 0 as well.
    ll pref[n+1];
    ll s[n];
    // Always set prefix sums of the first element to 0.
    pref[0] = 0;

    for (ll i = 0; i < n; i++) {
      ll x;
      cin >> x;

      m[i] = x;
      s[i] = x;
    }

    sort(m, m+n);

    // Prefix Sums is the most effiecent way to solve this problem. Dynamic Programming may work as well.
    for (ll i = 0; i < n; i++) {
      pref[i+1] = pref[i] + m[i]; 
    }

    

    
    // Example Test Cases
    // 1 2 3 4 5
    // 0 1 3 6 10 15


    // 1000000000 1234 10 1
    // 0 1 10 1234 1000000000

    string str = "";

    // 1 2 3 4 5


    //i == 2

    // 3 1 4 5 2
    // 1 2 3 4 5
    // 0 1 3 6 10 15



    for (ll i = 0; i < n; i++) {
      ll index;
      for (ll j = 0; j < n; j++) {
        if (s[i] == m[j]) {
          index = j;        }
      }

      if (pref[index] > m[index]) {
        str += 'L';
      } else if (pref[index] < m[index]) {
        str += 'G';
      } else {
        str += 'E';
      }
    }

    cout << str << endl;





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

  solve();



 
 
  
 
}


