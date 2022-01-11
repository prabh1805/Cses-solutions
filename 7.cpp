#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define all(n) 	 n.begin(),n.end()
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)		substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
	file_i_o();

	int n, x;
	cin >> n >> x;

	vector<pii> arr;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		arr.pb(mp(a, i + 1));
	}

	sort(all(arr));

	int i = 0, j = n - 1;

	while (i < j)
	{
		if (arr[i].ff + arr[j].ff == x)
		{
			int mn = min(arr[i].ss, arr[j].ss);
			int mx = max(arr[i].ss, arr[j].ss);
			cout << mn << " " << mx << "\n";
			return 0;
		} else if (arr[i].ff + arr[j].ff > x)
		{
			j--;
		} else {
			i++;
		}
	}
	cout << "IMPOSSIBLE" << "\n";
	return 0;
}
