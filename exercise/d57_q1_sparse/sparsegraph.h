#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>

using namespace std;

class SparseGraph{
public:
    SparseGraph() : SparseGraph(3) {
        // Your code here
        // SparseGraph(3);
    }

    SparseGraph(int n_in) : n(n_in) , al(n_in){
        // Your code here
        // n = n_in;
        // vector<set<int>> tmp(n);
        // al = tmp;
    }

    SparseGraph(const SparseGraph& G) : n(G.n) , al(G.al) {
        // Your code here
        // n = G.n;
        // al = G.al;
    }

    void AddEdge(int a, int b) {
        // Your code here
        al[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        al[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return al[a].count(b) > 0;
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph res(n);
        for (int i = 0 ; i < n ; i++){
            for (auto x : al[i]){
                res.al[x].insert(i);
            }
        }
        return res;
    }

protected:
    // Your code here
    int n;
    vector<set<int>> al;
};
#endif // __SPARSE_GRAPH_H__

