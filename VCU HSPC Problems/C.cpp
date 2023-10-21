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





void solve() {
  ll n;
  cin >> n;

  string dp[n];

  dp[0] = "1";
  dp[1] = "11";

  if (n > 2) {
    for (ll i = 2; i < n; i++) {
      vector<char> temp;
      vector<ll> tempIndex;
      vector<char> regular;
      string t = "";
      char prev;

      for (ll j = 0; j < dp[i-1].size(); j++) {
        if (count(temp.begin(), temp.end(), dp[i-1][j]) == 0 || prev != dp[i-1][j]) {
          temp.push_back(dp[i-1][j]);
          tempIndex.push_back(j);
          prev = dp[i-1][j];
        }
        regular.push_back(dp[i-1][j]);
      }
      /*
        1
        11
        21
        1211
        111221
        312211



      */

      //for (ll p = 0; p < temp.size(); p++) {
        //cout << i << ": " << temp.at(p) << " ";
      //}

      for (ll j = 0; j < temp.size(); j++) {
        char setChar = temp.at(j);
        ll count = 0;
        for (ll k = tempIndex.at(j); k < regular.size(); k++) {
          if (setChar == regular.at(k)) {
            count++;
          } else {
            break;
          }
        }
        t += to_string(count);
        t += setChar;
      }

      dp[i] = t;
    }
  }
  cout << dp[n-1] << endl;  

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


