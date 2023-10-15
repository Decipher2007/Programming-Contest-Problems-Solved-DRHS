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
  string s;
  cin>> s;

  // temporary string storage for s.
  string t = s;

  // sorting s.
  sort(s.begin(), s.end());

  // If the string is TopSecret. The string when sorted should equal this.
  string e = "STceeoprt";

  // Map for any capitalization differences.
  map<char, bool> caseChange = {{'O', true}, {'T', true}, {'P', true}, {'E', true}, {'C', true}, {'R', true}, {'t', true}};


  if (s == "STceeoprt") {
    cout << 0 << endl;
  } else {
    // transform s to uppercase.
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    sort(s.begin(), s.end());
    // All strings case variations of TopSecret should equal CEEOPRSTT. If it does not, there is a difference of letters.
    if (s != "CEEOPRSTT") {
      cout << "No" << endl;
    } else {

      // Counting the number of case differences
      ll count = 0;
      for (ll i = 0; i < t.size(); i++) {
        if (caseChange[t[i]]) {
          count++;
        }
      }
      // Output would be count - 1 because there are two case variations of t.
      cout << count-1 << endl;
    }

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


