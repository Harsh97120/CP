#include <bits/stdc++.h>
using namespace std;

#define ll long long


// TLE


ll f(vector<ll>&v , map<vector<ll>,ll>&mp){
    if(v.size() == 2) return v[0] + v[1];

    ll n = v.size();
    
    if(mp.find(v) != mp.end()) return mp[v];

    ll ans = LLONG_MAX;

    for(ll i=0;i<n-1;i++){
        ll a = v[i] , b = v[i+1];
        ll c = a + b;
        vector<ll>temp;

        for(ll j=0;j<n;j++){
            if(j == i){
                temp.push_back(c);
            }
            else if(j == i+1) continue;
            else{
                temp.push_back(v[j]);
            }
        }

        ll cost = c + f(temp,mp);
        ans = min(ans , cost);
        
    }

    return mp[v] = ans;

}

int main()
{
    ll n;
    cin >> n;

    vector<ll>v(n);
    for(ll &i:v) cin >> i;

    map<vector<ll>,ll>mp;
    
    cout << f(v,mp) << endl;
    return 0;
}