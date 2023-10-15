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

  if (n == 4) {
    cout << "block" << endl;
  } else {
    cout << "safe" << endl;
  }
  
  
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


