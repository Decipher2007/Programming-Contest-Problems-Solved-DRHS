#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

#define ll long long int






void solve() {
  ll n, h;

  cin >> n >> h;

  ll m[n];
  ll arr[n];

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    m[i] = x;
    arr[i] = x;
  }

  ll candy[h];
  ll array[h];

  for (ll i = 0; i < h; i++) {
    ll x;
    cin >> x;
    candy[i] = x;
    array[i] = 0;
  }


  // 6, 1
  // 0, 0

  // 3 >= 0
  // arr[0] = 3;
  // 2 < 3;

  // 0, 6  ||||| 0, 1
  // 3 ||||||||| 
  // 3, 6

  // array = {0, 0};\

  for (ll i = 0; i < h; i++) {


    for (ll j = 0; j < n; j++) {

      if (arr[j] >= array[i] && candy[i] != -1) {
        ll diff;
        if ((arr[j] - array[i]) >= candy[i]) {
          diff = candy[i];
          candy[i] = -1;
        } else if ((arr[j] - array[i]) < candy[i]) {
          diff = (arr[j] - array[i]);
        }

        array[i] += diff;


        arr[j] += (diff);
      }


    }

  }

  for (ll k = 0; k < n; k++) {
    cout << arr[k] << endl;
  }

  

  
  




  
  
  
  

}
  

int main() {


 //Remember to comment out file import  
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


