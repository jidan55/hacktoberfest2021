#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;

void preComputation()
{
    for (int i = 1; i <= 2000; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            //nothing
        }
        else
        {
            v.push_back(i);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    cout << v[n - 1] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    preComputation();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}