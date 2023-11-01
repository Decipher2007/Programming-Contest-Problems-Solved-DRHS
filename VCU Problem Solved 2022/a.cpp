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
  map<string, vector<string>> mp;
  string word;
  while (cin >> word) {
    string regular = word;
    sort(word.begin(), word.end());
    if (mp.count(word) == 0) {
      mp.emplace(word, vector<string>());
    } else {
      mp[word].push_back(regular);
    }
  }

  for( const auto& pair : mp )
  {
      std::cout << "[" << pair.first << " ";
      for( string d : pair.second ) cout << d << " ";
      cout << "]" ;
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


