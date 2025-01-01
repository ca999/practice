#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Header files, namespaces,
// macros as defined above

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
int MOD = 1e9 + 7 ;

int add(int a, int b)
{
    a += b;
    if (a >= MOD) a -= MOD;
    if (a < 0) a += MOD;
    return a;
}

int mul(int a, int b)
{
    return a * 1ll * b % MOD;
}

void solve ()
{
  // if there is consecutive division like factorization etc, don't use long long remove the #define
  int n, pos;
  cin >> n >> pos;
  pos -=1;
  int arr[n];
  for(int index = 0; index < n ; index++) {
    cin>>arr[index];
  }
  int criminals = 0;
  for(int distance = 0; distance <=100 ; distance++)   {
    int prev = pos - distance;
    int nex = pos + distance;
    if(prev >= 0 && nex < n) {
        if(prev == nex) {
            criminals += arr[prev];
        } else {
            criminals += (min(arr[prev], arr[nex]) * 2);
        }
    } else if (prev >= 0) {
        criminals += arr[prev];
    } else if(nex < n) {
        criminals += arr[nex];
    } else {
        break;
    }
  }

  cout << criminals << endl;
    
}



int32_t main()
{
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

        int t = 1;
        // cin >> t;

        while ( t-- )
            solve ();

        return 0;
}

 