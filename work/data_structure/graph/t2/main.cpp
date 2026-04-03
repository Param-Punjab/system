#include <iostream>
#include <vector>
using namespace std;

class graph {
public:
  vector<vector<int>> g;
  int nodes;

  graph(int n) {
    nodes = n;
    g.resize(nodes);
    cout << "Graph got created with nodes: " << 0 << " - " << nodes - 1 << endl;
  }

  void connection(int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
    cout << "Connection got established between nodes: " << s << " and " << d << endl;
  }

  void print() {
    int size;
    cout << "Displaying Graph" << endl;
    for (int i = 0; i < nodes; i++) {
        size = g[i].size();
        cout << i << " -> "; 
        for (int j = 0; j < size; j++) {
            cout << g[i][j] << ", "; 
        } 
        cout << endl;
    }
  }
};

int main() {
  cout << " --- Graph Implementation --- " << endl;
  graph g1(3);
  g1.connection(0, 1);
  g1.connection(0, 2);
  g1.print();
  return 0;
}