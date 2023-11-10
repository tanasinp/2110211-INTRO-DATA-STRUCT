#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() : DenseGraph(3) {
        // Your code here
    }

    DenseGraph(int n_in) : n(n_in) , al(n_in) {
        // Your code here
        for (auto &x : al){
            x.resize(n_in);
        }
    }

    DenseGraph(const DenseGraph& G) : n(G.n) , al(G.al) {
        // Your code here

    }

    void AddEdge(int a, int b) {
        // Your code here
        al[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        al[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return al[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph res(n);
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < n ; j++){
                res.al[j][i] = al[i][j];
            }
        }
        return res;
    }

protected:
    int n;
    // Your code here
    vector<vector<bool>> al;
};
#endif // __DENSE_GRAPH_H__
