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
Prefix Sums: pref[R] - pref[L-1];

*/

/*

Fenwicks Trees. Similar to Prefix Sums however used for updating values.
Fenwick Tree is known as Binary Indexed Tree
To find the Sum of all the previous values, cascade down the tree using the lsb (Least Significant Bit).
To add a value to all the elements of the prefix sums ahead of the element, add the value with the lsb.

Fenwick Sums: getSum(i) - getSum(j-1) i and j or getSum(i+1) - getSum(j)
Fenwick Sums: Given an index n

Example:

ll sum = 0;
while (n > 0) {
  sum += tree[n];
  n -= n & (-n) :: Finds the LSB of the binary representation.
}

Fenwick Update: Cascade upwards by adding the LSB. Element P with value of Q.
P += P & (-P)

while (P <= N (total)) {
  tree[p] += q;
  p+= p & (-p) :: Finds the LSB of Binary Representation and adds it to continue to update the value.
}
 

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

bool distance(ll x, ll y, ll x1, ll y1) {
  int ans = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
  if (ans > 200) {
    return true;
  } 
  return false;
}



void solve() {
  vector<pair<ll, ll>> vec;
  ll numOfOffice;
  cin >> numOfOffice;

  for (ll i = 0; i < numOfOffice; i++) {
    ll x, y;
    cin >> x >> y;
    vec.push_back(make_pair(x, y));
  }

  bool cond = true;

  for (int i = 0; i < vec.size(); i++) {
    for (int j = i+1; j < vec.size(); j++) {
      ll xValOne = vec[i].first;
      ll yValOne = vec[i].second;
      ll xValTwo = vec[j].first;
      ll yValTwo = vec[j].second;

      bool condition = distance(xValOne, yValOne, xValTwo, yValTwo);
      if (condition) {
        cond = false;
        break;
      }
    }
  }

  if (cond) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }


  


}
  

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 
  ios::sync_with_stdio(0);
  cin.tie(0);
 
 
 
  ll t;
  cin >> t;
 
  while (t--) {
    solve();
  }



 
 
  
 
}


