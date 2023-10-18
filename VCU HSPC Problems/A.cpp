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





void solve() {
  ll n, k;
  cin >> n >> k;

  string arr[n][k]; 
  ll m[n][k];
  bool visited[n][k];

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < k; j++) {
      string x;
      cin >> x;

      arr[i][j] = x;

      if (x == "*") {
        m[i][j] = -2000000;
      } else if (x == ".") {
        m[i][j] = 0;
      }
      visited[i][j] = true; 
    }
  }

  for (ll i = 0; i < n; i++) { 
    for (ll j = 0; j < k; j++) {
      if (arr[i][j] == "*") {
        if (visited[i+1][j+1] == true && i + 1 < n && j+1 < k) {
          m[i+1][j+1] += 1;
        }
        if (visited[i+1][j] == true && i + 1 < n) {
          m[i+1][j] += 1;
        } 
        if (visited[i][j+1] == true && j+ 1 < k) {
          m[i][j+1] += 1;
        }
        if (visited[i-1][j-1] == true && i - 1 >= 0 && j - 1 >= 0) {
          m[i-1][j-1] += 1;
        }
        if (visited[i-1][j] == true && i - 1 >= 0) {
          m[i-1][j] += 1;
        }
        if (visited[i][j-1] == true && j - 1 >= 0) {
          m[i][j-1] += 1;
        }
        if (visited[i+1][j-1] == true && i + 1 < n && j - 1 >= 0) {
          m[i+1][j-1] += 1;
        }
        if (visited[i-1][j+1] == true && i - 1 >= 0 && j + 1 < k) {
          m[i-1][j+1] += 1;
        }
      }
    }
  }

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < k; j++) {
      if (m[i][j] < 0) {
        cout << "*" << " ";
      } else {
        cout << m[i][j] << " ";
      }
    }
    cout << endl;
  }

  
}

int main() {

  /*ll t;
  cin >> t;

  while (t !=0) {
    solve();
    t--;
  }*/
  solve();

}


