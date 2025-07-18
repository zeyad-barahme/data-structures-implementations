#include <iostream>
using namespace std;

// Disjoint Set (Union-Find) with Path Compression and Union by Rank
class DisjointSet {
private:
    int* parent;
    int* rank;
    int size;

public:
    DisjointSet(int n) {
        size = n;
        parent = new int[n];
        rank = new int[n];
        for (int i = 0; i < n; ++i) {
            parent[i] = i;  // each node is its own parent
            rank[i] = 0;    // initial rank is 0
        }
    }

    // Find with path compression
    int find(int u) {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }

    // Union by rank
    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU == rootV)
            return;  // already in the same set

        if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        } else if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        } else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }

    ~DisjointSet() {
        delete[] parent;
        delete[] rank;
    }
};

int main() {
    DisjointSet ds(5);

    ds.unite(0, 2);
    ds.unite(4, 2);
    ds.unite(3, 1);

    cout << (ds.find(4) == ds.find(0)) << endl;  // 1 (true)
    cout << (ds.find(1) == ds.find(0)) << endl;  // 0 (false)

    ds.unite(1, 0);

    cout << (ds.find(1) == ds.find(4)) << endl;  // 1 (true)

    return 0;
}
