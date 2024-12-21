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

  ll n;
  cin >> n;

  ll m;
  cin >> m;

  map<string, ll> mp;  
  vector<pair<ll, set<string>>> vec;
  for (ll i = 0; i < n; i++) {
    string s;
    cin >> s;

    ll x;
    cin >> x;

    mp.insert(make_pair(s, x));
  }



  for (ll i = 0; i < m; i++) {
    ll cost;
    cin >> cost;

    string temp;
    getline(cin, temp);

    stringstream ss(temp);

    string temporary;

    vector<string> collection;

    while (getline(ss, temporary, ' ')) {
      collection.push_back(temporary);
    }

    set<string> se(collection.begin(), collection.end());


    vec.push_back(make_pair(cost, se));
  }

  ll mini = 1000000000000;

  string change;

  for (const auto &p : mp) {
    ll total = 0;
    for (auto const &q : vec)  {
      set<string> fin = q.second;

      total += fin.count(p.first);

    }

    total = m - total;

    ll comparison = mini;

    mini = min((total*p.second), mini);

    if (comparison != mini) {
      change = p.first;
    }
  }

  bool cond = false;
  for (auto const &s : vec) {
    if (s.first >= mini) {
      cond = true;
    }
  }

  if (cond == false) {
    cout << "no games found" << endl;
  } else {
    cout << change << " " << mini << endl;
  }




  





 
 
  
 
}


