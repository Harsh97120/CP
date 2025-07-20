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

bool isCapital(char &ch)
{
    return ch >= 'A' && ch <= 'Z' ; 
}


void tolower(string &str)
{
    for(char &ch:str)
    {
        if(isCapital(ch))
        {
            ch += 32 ; 
        }
    }
}

ll maxi = 0 ; 

ll countNodes(unordered_map <string , bool> &arr)
{
    ll cnt = 0 ; 
    for(auto it:arr)
    {
        cnt += it.second ; 
    }

    return cnt ;
}

void dfs(string &node , 
         unordered_map <string , bool > &vis , 
         unordered_map <string , bool > &pathvis , 
         unordered_map <string , vector <string>> &mpp)
{
    vis[node] = 1 ; 
    pathvis[node] = 1 ; 

    for(auto it:mpp[node])
    {
        if(!vis[it])
        {
            dfs(it , vis , pathvis , mpp);
        }
    }

    ll cnt = countNodes(pathvis);
    maxi = max(maxi , cnt);
    pathvis[node] = 0 ; 
}

void print(unordered_map <string , vector <string>> &arr)
{
    for(auto it:arr)
    {
        cout << it.first << " - " ; 

        for(auto t:it.second)
        {
            cout << t << " ";
        }

        cout << "\n";
    }
}

void print(unordered_map <string , bool > &arr)
{
    for(auto it:arr)
    {
        ll x = it.second ;
        cout << it.first << " : " << x << "\n";
    }
}

void task()
{
    ll n ; 
    cin >> n ; 
    
    string repost , t ,  p1 , p2; 
    unordered_map <string , vector <string>> mpp ;
    unordered_map <string , bool > vis ; 
    unordered_map <string , bool > pathvis ;  

    cin.ignore();

    llloop(i ,0 , n)
    {
        getline(cin , repost , '\n');
        stringstream str(repost);

        getline(str , p1 , ' ');
        getline(str , p2 , ' ');
        getline(str , p2 , ' ');

        tolower(p1);
        tolower(p2);

        // cout << "p1: " << p1 << "\n";
        // cout << "p2: " << p2 << "\n";

        mpp[p2].pb(p1);
        vis[p1] = 0 ; 
        vis[p2] = 0 ; 
        pathvis[p1] = 0 ; 
        pathvis[p2] = 0 ;

    }

    // print(mpp);
    string st = "polycarp" ; 

    // DFS
    // dfs(st , vis , pathvis , mpp);
    

    // BFS 

    queue <pair <string , ll >> q ;
    q.push({st , 1}); 
    vis[st] = 1 ; 
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();

        string t = it.first ; 
        ll cnt = it.second ; 

        maxi = max(maxi , cnt);

        for(auto nbr:mpp[t])
        {
            if(!vis[nbr])
            {
                q.push({nbr , cnt + 1});
            }
        }
    }


    print(maxi , "\n");

}

int main()
{
    // ll test_case = 1;
    // cin >> test_case;
    // while(test_case--) 
        task();
    return 0;
}