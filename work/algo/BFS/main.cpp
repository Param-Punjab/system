#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    vector<vector<int>> adj;
    int nodes;
Graph(int n) { nodes = n;
        adj.resize(n);
        cout << "Graph got created with nodes: " << 0 << " - " << nodes-1 << endl;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << "Edge got connected with each others: " << u << " and " << v << endl;
    }

    void print_graph() { cout << endl << "Printing Grpah" << endl;
        for (int i = 0; i < adj.size(); i++) {
            cout << i << " -> ";
            for (int j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    void BFS() {
        queue<int> que;
        int s = 0;
        for (int j = 0; j < nodes; j++) {
            if (!que.empty()) {
                s = que.front();
                que.pop();
            }
            int size = adj[s].size();
            for (int i = 0; i <= size; i++) {
                cout << adj[s][i] << " ";
                que.push(adj[s][i]);
            }
        }
    }

    void BFS_T2() {
        queue<int> que;
        int s = 0;
        cout << adj[0][0];

    }

};

int main() {
    cout << "   --- Breadth First Search ---" << endl;
    vector<vector<int>> adj;
    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.print_graph();
    cout << g.adj[0][0];

    return 0;
}
