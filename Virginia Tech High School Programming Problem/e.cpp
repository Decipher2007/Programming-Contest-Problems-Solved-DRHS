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
/*#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif*/
 
  ios::sync_with_stdio(0);
  cin.tie(0);

 
 
  /*ll t;
  cin >> t;
 
  while (t--) {
    solve();
  }*/

  vector<string> temp = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

  ll a, b, c;
  cin >> a >> b >> c;

  vector<ll> temp2 = {a, b, c};

  bool cond = false;
  for (ll i = 0; i < temp2.size(); i++) {
    if (temp2[i] > 11) {
      cond = true;
      break;
    }
  }

  

  if (cond == true) {
    cout << "neither" << endl;
  } else {
    if (c - a == 7 || (b-a) + (c + 1) == 7) {
      if (b - a == 4) {
        string s = "";
        s += temp[a];
        s += " ";
        s += "major";
        cout << s << endl;
      } 
      else if (b - a == 3) {
        string s = "";
        s += temp[a];
        s += " ";
        s += "minor";
        cout << s << endl;
      } 
    } 
    else if ((b+c) - 1 == 7) {
      if (b+1 == 3) {
        string s = "";
        s += temp[a];
        s += " ";
        s += "minor";
        cout << s << endl;
      } 
      else if (b+1 == 4) {
        string s = "";
        s += temp[a];
        s += " ";
        s += "major";
        cout << s << endl;
      } 
    }
  }



 
 
  
 
}


