#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

void solve()
{
	
	int n;
	cin >> n;
	if(n == 1)
		cout << n;
	else if(n <= 3) {
		cout << "NO SOLUTION";
	}
	else {
		vector<int> arr(n);
		int t = 1;
		for(int i = 1; i < n; i+=2)
			arr[i] = t++;
		
		for(int i = 0; i < n; i+=2)
			arr[i] = t++;
		
		
		for(auto i : arr)
			cout << i << " ";
	}
	
}
 
int32_t main()
{
    solve();
    return 0;
}