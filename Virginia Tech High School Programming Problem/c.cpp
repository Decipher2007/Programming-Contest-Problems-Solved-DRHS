#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

#define ll long long int




void solve() {

  




  
  
  
  

}
  

int main() {


// Remember to comment out file import  
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

  ll m, n;
  cin >> m >> n;

  vector<ll> temp;

  for (ll i = 0; i < m; i++) {
    ll x;
    cin >> x;
    
    temp.push_back(x);
  }


  sort(temp.begin(), temp.end());

  if (temp.back() - temp.front() > n) {
    cout << "IMPOSSIBLE" << endl;
  } else {
    for (ll i = 0; i < temp.size(); i++) {
      for (ll j = 0; j < temp[i]; j++) {
        cout << temp[j] << " ";
      }
      cout << endl;
    }
  }



 
 
  
 
}


