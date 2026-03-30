#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    vector<vector<int>> adj;
    int nodes;

    Graph(int n) {
        nodes = n;
        adj.resize(n);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void print_graph() {
        for (int i = 0; i < adj.size(); i++) {
            cout << i << " -> ";
            for (int j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g1(04);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 3);
    g1.print_graph();

    return 0;
}
