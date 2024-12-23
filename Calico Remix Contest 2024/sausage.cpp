#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

#define ll long long int

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




void solve() {
  ll chains, links;
  cin >> chains >> links;

  vector<ll> temp;

  ll high = -1;

  for (ll i = 0; i < chains; i++) {
    ll height;
    cin >> height;
    temp.push_back(height);
    high = max(high, height);
  }

  vector<ll> m(high, 0);

  for (ll i = 0; i < chains; i++) {
    ll cliff; 
    cin >> cliff;

    for (ll j = cliff; j < temp[i]; j++) {
      m[j-1]++;
    }
  }

  /*for (ll i = 0; i < high; i++) {
    cout << m[i] << endl;
  }*/

  //cout << endl;

  ll pref[100];
  pref[100] = 0;

  for (ll i = 1; i < 100; i++) {
    pref[i] = pref[i-1] + m[i-1];    
  }

  /*for (ll i = 0; i < high; i++) {
    cout << pref[i] << endl;
  }*/

  

  bool cond = false;

  ll index1, index2;

  for (ll i = 1; i < 100; i++) {
    for (ll j = 2; j < 100; j++) {
      if (pref[j] - pref[i] == links) {
        cond = true;
        index1 = i+1;
        index2 = j+1;
        break;
      }

    }
  }

  if (cond) {
    cout << index1 << " " << index2 << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
  


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


