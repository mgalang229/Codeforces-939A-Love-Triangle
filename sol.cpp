#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=5000;
int f[mxN], n;

int main() {
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> f[i];
	bool ok=0;
	for(int i=1; i<=n; ++i)
		if(f[f[f[i]]]==i)
			ok=1;
	cout << (ok ? "YES" : "NO") << "\n";
}
