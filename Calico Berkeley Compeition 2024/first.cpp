#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

#define ll long long int





void solve() {

  ll n;
  cin >> n;

  string s = "";

  if (n == 0) {
    s += "haha good one";
  } else if (n >= 10 && n < 180) {
    for (ll i = 1; i <= n/10; i += 1) {
      s += "berkeley";
    }

    s += "time";
  } else if (n >= 180) {
    s += "canceled";
  }

  cout << s << endl;
  
  

  // Remember to comment out file import
}
  

int main() {
/*#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif*/
 
  ios::sync_with_stdio(0);
  cin.tie(0);
 
 
 
  ll t;
  cin >> t;
 
  while (t--) {
    solve();
  }



 
 
  
 
}


