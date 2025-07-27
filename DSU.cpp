#include <bits/stdc++.h>
using namespace std;

class DSU{
private:
    vector<int>parent, rank, size;
public:
    DSU(int n){
        rank.resize(n, 0);
        size.resize(n, 1);
        parent.resize(n);
        for(int i = 0; i < n; i++)  parent[i] = i;
    }

    int findParent(int num){
        if(num == parent[num])  return num;
        return parent[num] = findParent(parent[num]);
    }

    void DSU_rank(int u, int v){
        int ultimate_par_u = findParent(u);
        int ultimate_par_v = findParent(v);
        
        if(ultimate_par_u == ultimate_par_v)    return;
        
        int rank_u = rank[ultimate_par_u];
        int rank_v = rank[ultimate_par_v];

        if(rank_u < rank_v){
            parent[ultimate_par_u] = ultimate_par_v;
        }
        else if(rank_u > rank_v){
            parent[ultimate_par_v] = ultimate_par_u;
        }
        else{
            parent[ultimate_par_v] = ultimate_par_u;
            rank[ultimate_par_u]++;
        }
    }

    void DSU_size(int u, int v){
        int ultimate_par_u = findParent(u);
        int ultimate_par_v = findParent(v);

        if(ultimate_par_u == ultimate_par_v)    return;

        int size_u = size[ultimate_par_u];
        int size_v = size[ultimate_par_v];

        if(size_u < size_v){
            parent[ultimate_par_u] = ultimate_par_v;
            size[ultimate_par_v] += size[ultimate_par_u];
        }
        else{
            parent[ultimate_par_v] = ultimate_par_u;
            size[ultimate_par_u] += size[ultimate_par_v];
        }
    }

};

int main(){
    DSU dsu(5);
    dsu.DSU_rank(0, 1);
    dsu.DSU_rank(1, 2);
    cout << dsu.findParent(2) << endl; 
    cout << dsu.findParent(0) << endl; 
    return 0;
}