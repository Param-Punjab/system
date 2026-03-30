#include <iostream>
#include <vector>
#include <queue>
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
    queue<int> q;
    q.push(5);
    q.front();

    return 0;
}
