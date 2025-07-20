#include <bits/stdc++.h>
using namespace std;

#define loop(i , a , b) for(int i=a;i < b;++i)
#define llloop(i , a , b) for(long long i=a;i < b;++i)
#define dloop(i , a , b) for(int i=a;i >= b;--i)
#define lldloop(i , a , b) for(long long i=a;i >= b;--i)
#define ump unordered_map
#define pb push_back
#define ppb pop_back
#define ll long long
#define im INT_MAX
#define in INT_MIN
#define intPair pair<int, int>

class Node { public: int val; Node* left; Node* right; Node* next; Node* prev; };

using intGrid = vector<vector<int>>;
using llGrid = vector<vector<long long>>;
using boolGrid = vector<vector<bool>>;
using strGrid = vector<vector<string>>;
using intVec = vector<int>;
using llVec = vector<long long>;
using boolVec = vector<bool>;
using strVec = vector<string>;
using intSt = stack<int>;
using intQ = queue<int>;
using strQ = queue<string>;

int minimum(vector<int> &arr){ return *min_element(arr.begin(), arr.end()); }
int maximum(vector<int> &arr){ return *max_element(arr.begin(), arr.end()); }

void print(vector<vector<bool>> &arr){ for(auto i : arr){ for(auto j : i){ cout << (j ? "1 " : "0 "); } cout << "\n"; } }
void print(vector<vector<char>> &arr){ for(auto i : arr){ for(auto j : i){ cout << j << " "; } cout << "\n"; } }
void print(vector<vector<int>> &arr){ for(auto i : arr){ for(auto j : i){ cout << j << " "; } cout << "\n"; } }
void print(vector<int> &arr){ for(auto i : arr){ cout << i << " "; } cout << "\n"; }
void print(vector<pair<int, int>> &arr){ for(auto i : arr){ cout << "First: " << i.first << " Second: " << i.second << " \n"; } }
void print(set<vector<int>> &arr){ for(auto array : arr){ for(int num : array){ cout << num << " "; } cout << "\n"; } }
void print(int x, int y){ cout << "1st: " << x << " 2nd: " << y << "\n"; }
void print(int val){ cout << val ; }
void print(string &str, int &val){ cout << str << ": " << val << "\n"; }
void print(vector<bool> &arr){ for(auto it : arr){ cout << (it ? "1 " : "0 "); } cout << "\n"; }
void print(unordered_map<string, int> &mpp){ for(auto it : mpp){ cout << "String: " << it.first << " ind: " << it.second << "\n"; } }
void print(const char *str, int val){ cout << str << ": " << val << "\n"; }
void print(int val , const char * str){cout << val << str ;}
void print(int val , string str){cout << val << str ;}
void print(const char *str){ cout << str ; }
void print(vector<string> &arr){ for(auto it : arr){ cout << it << " "; } cout << "\n"; }
void print(Node *node){ while(node){ cout << node->val << " "; node = node->next; } cout << "\n"; }
void print(string str){ cout << str ; }
void print(char &a){cout << a ;}

void print(vector<vector<long long>> &arr){ for(auto &i : arr) for(auto &j : i) cout << j << " \n"[&j == &i.back()]; }
void print(vector<long long> &arr){ for(auto &i : arr) cout << i << " "; cout << "\n"; }
void print(vector<pair<long long, long long>> &arr){ for(auto &i : arr) cout << "First: " << i.first << " Second: " << i.second << "\n"; }
void print(set<vector<long long>> &arr){ for(auto &v : arr){ for(auto x : v) cout << x << " "; cout << "\n"; } }
void print(long long x, long long y){ cout << "1st: " << x << " 2nd: " << y << "\n"; }
void print(long long val){ cout << val << "\n"; }
void print(string &str, long long &val){ cout << str << ": " << val << "\n"; }
void print(unordered_map<string, long long> &mpp){ for(auto &it : mpp){ cout << "String: " << it.first << " ind: " << it.second << "\n"; } }
void print(const char *str, long long val){ cout << str << ": " << val << "\n"; }
void print(long long val , const char * str){ cout << val << str ; }
void print(long long val , string str){ cout << val << str ; }

void print(vector<vector<double>> &arr){ for(auto &i : arr) for(auto &j : i) cout << j << " \n"[&j == &i.back()]; }
void print(vector<double> &arr){ for(auto &i : arr) cout << i << " "; cout << "\n"; }
void print(vector<pair<double, double>> &arr){ for(auto &i : arr) cout << "First: " << i.first << " Second: " << i.second << "\n"; }
void print(set<vector<double>> &arr){ for(auto &v : arr){ for(auto x : v) cout << x << " "; cout << "\n"; } }
void print(double x, double y){ cout << "1st: " << x << " 2nd: " << y << "\n"; }
void print(double val){ cout << val << "\n"; }
void print(string &str, double &val){ cout << str << ": " << val << "\n"; }
void print(unordered_map<string, double> &mpp){ for(auto &it : mpp){ cout << "String: " << it.first << " ind: " << it.second << "\n"; } }
void print(const char *str, double val){ cout << str << ": " << val << "\n"; }
void print(double val , const char * str){ cout << val << str ; }
void print(double val , string str){ cout << val << str ; }

void print(vector<vector<float>> &arr){ for(auto &i : arr) for(auto &j : i) cout << j << " \n"[&j == &i.back()]; }
void print(vector<float> &arr){ for(auto &i : arr) cout << i << " "; cout << "\n"; }
void print(vector<pair<float, float>> &arr){ for(auto &i : arr) cout << "First: " << i.first << " Second: " << i.second << "\n"; }
void print(set<vector<float>> &arr){ for(auto &v : arr){ for(auto x : v) cout << x << " "; cout << "\n"; } }
void print(float x, float y){ cout << "1st: " << x << " 2nd: " << y << "\n"; }
void print(float val){ cout << val << "\n"; }
void print(string &str, float &val){ cout << str << ": " << val << "\n"; }
void print(unordered_map<string, float> &mpp){ for(auto &it : mpp){ cout << "String: " << it.first << " ind: " << it.second << "\n"; } }
void print(const char *str, float val){ cout << str << ": " << val << "\n"; }
void print(float val , const char * str){ cout << val << str ; }
void print(float val , string str){ cout << val << str ; }

vector<vector<int>> MakeAnUndirectedGraph(int &V, vector<vector<int>> &edges){ vector<vector<int>> graph(V); for(auto it : edges){ int u = it[0], v = it[1]; graph[u].pb(v); graph[v].pb(u); } return graph; }
vector<vector<int>> MakeAnUndirectedGraph(int &V, vector<pair<int, int>> &edges){ vector<vector<int>> graph(V); for(auto it : edges){ int u = it.first, v = it.second; graph[u].pb(v); graph[v].pb(u); } return graph; }
vector<vector<int>> MakeADirectedGraph(int &V, vector<vector<int>> &edges){ vector<vector<int>> graph(V); for(auto it : edges){ int u = it[0], v = it[1]; graph[u].pb(v); } return graph; }
vector<vector<int>> MakeADirectedGraph(int &V, vector<pair<int, int>> &edges){ vector<vector<int>> graph(V); for(auto it : edges){ int u = it.first, v = it.second; graph[u].pb(v); } return graph; }
vector<vector<pair<int, int>>> MakeAWeightedUndirectedGraph(int &V, vector<vector<int>> &edges){ vector<vector<pair<int, int>>> graph(V); for(auto it : edges){ int u = it[0], v = it[1], wt = it[2]; graph[u].pb({v, wt}); graph[v].pb({u, wt}); } return graph; }
vector<vector<pair<int, int>>> MakeAWeightedDirectedGraph(int V, vector<vector<int>> &edges){ vector<vector<pair<int, int>>> graph(V); for(auto it : edges){ int u = it[0], v = it[1], wt = it[2]; graph[u].pb({v, wt}); } return graph; }
vector<vector<int>> MakeAnUndirectedGraphMatrix(int &n, vector<vector<int>> &edges){ vector<vector<int>> graph(n, vector<int>(n, INT_MAX)); for(int i = 0; i < n; ++i) graph[i][i] = 0; for(auto it : edges){ int u = it[0], v = it[1], wt = it[2]; graph[u][v] = wt; graph[v][u] = wt; } return graph; }
vector<vector<int>> MakeADirectedGraphMatrix(int &n, vector<vector<int>> &edges){ vector<vector<int>> graph(n, vector<int>(n, INT_MAX)); for(int i = 0; i < n; ++i) graph[i][i] = 0; for(auto it : edges){ int u = it[0], v = it[1], wt = it[2]; graph[u][v] = wt; } return graph; }

class DisJointSet { public: vector<int> size, rank, parent; DisJointSet(int V){ size.resize(V + 1, 1); rank.resize(V + 1, 0); parent.resize(V + 1); for(int i = 0; i <= V; ++i) parent[i] = i; } int find(int x){ return parent[x] == x ? x : parent[x] = find(parent[x]); } void UnionByRank(int x, int y){ int u = find(x), v = find(y); if(u == v) return; if(rank[u] < rank[v]) parent[u] = v; else if(rank[u] > rank[v]) parent[v] = u; else { parent[u] = v; rank[v]++; } } void UnionBySize(int x, int y){ int u = find(x), v = find(y); if(u == v) return; if(size[u] < size[v]) parent[u] = v, size[v] += size[u]; else parent[v] = u, size[u] += size[v]; } };

int lca(int root, int a, int b, vector<vector<int>> &graph){ if(root == a || root == b) return root; if(graph[root].empty()) return 0; int val1 = 0, val2 = 0, val; for(int child : graph[root]){ val = lca(child, a, b, graph); if(val != 0){ if(val1 == 0) val1 = val; else return root; } } return val1; }

void f(ll ind , ll n , 
       vector <pair <ll ,string>> &arr , 
       ll tot , ll &mini , vector <bool> &vis)
{

    if(vis[0] && vis[1] && vis[2])
    {
        // print(vis);
        mini = min(mini , tot);
        // print("mini" , mini);

        return ;
    }

    if(ind == n)
    {
        return ; 
    }

    f(ind+1 , n , arr , tot , mini , vis);

    auto it = arr[ind] ;

    ll price = it.first ; 
    string  str = it.second ; 
    ll size = str.length() ; 

    vector <bool> prev = vis ; 

    llloop(i , 0 , size)
    {
        vis[str[i] - 'A'] = 1 ; 
    }

    f(ind+1 , n , arr , tot + price , mini , vis);

    vis = prev ; 
}


// void task()
// {
//     ll n , price ; 
//     cin >> n ; 

//     string str ; 
//     vector <bool> vis(3 , 0);
//     vector <pair<ll , string>> arr ; 

//     llloop(i , 0 , n)
//     {
//         cin >> price >> str ; 
//         arr.pb({price , str});

//         ll len = str.length() ; 

//         llloop(j , 0 , len)
//         {
//             vis[str[j] - 'A'] = 1 ;  
//         }
//     }

//     if(!(vis[0] && vis[1] && vis[2]))
//     {
//         print(-1 , "\n");
//         return ; 
//     }

//     vis.resize(3 , 0);
    
//     llloop(i , 0 , 3)
//     {
//         vis[i] = 0 ; 
//     }

//     ll ans = 1e15 ; 

//     f(0 , n , arr, 0 , ans , vis);

//     print(ans);

// }

void task()
{
    ll n , price ; 
    cin >> n ; 
    string str; 
    vector <bool> vis(3 , 0);

    ll maxi = 1e9 ;

    ll A(maxi) , B(maxi) , C(maxi) , AB(maxi) , BC(maxi) , AC(maxi) , ABC(maxi) ; 

    llloop(i , 0 , n)
    {
        cin >> price >> str ; 
        sort(str.begin() , str.end());

        ll size = str.length();
        llloop(i , 0 , size)
        {
            vis[str[i] - 'A'] = 1 ; 
        }

        if(str == "A") A = min(A , price);
        else if(str == "B") B = min(B , price);
        else if(str == "C") C = min(C , price);
        else if(str == "AB")
        {
            AB = min(AB , price);
            A = min(A , price);
            B = min(B , price);
        }
        else if(str == "BC")
        {
            BC = min(BC , price);
            B = min(B , price);
            C = min(C , price);
        }
        else if(str == "AC")
        {
            AC = min(AC , price);
            A = min(A , price);
            C = min(C , price);
        }
        else 
        {
            ABC = min(ABC , price);
            A = min(A , price);
            B = min(B , price);
            C = min(C , price);
        }
    }
    if(!(vis[0] && vis[1] && vis[2]))
    {
        print(-1);
        return ;
    }

    ll ans = 1e9 ; 

    ans = min(A+B+C , min(AB + C , min(BC + A , min(AC + B , ABC))));

    print(ans);
}

int main()
{
    // ll test_case = 1;
    // cin >> test_case;
    // while(test_case--) 
        task();
    return 0;
}