#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;

class graph {
public:
  vector<vector<int>> g;
  int nodes;

  graph(int n) {
    nodes = n;
    g.resize(nodes);
    cout << "Graph got created with nodes: " << 0 << " - " << nodes - 1 << endl
         << endl;
  }

  void connection(int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
    cout << "Connection got established between nodes: " << s << " and " << d
         << endl;
  }

  void print() {
    int size;
    cout << endl << "Displaying Graph" << endl;
    for (int i = 0; i < nodes; i++) {
      size = g[i].size();
      cout << i << " -> ";
      for (int j = 0; j < size; j++) {
        cout << g[i][j] << " ";
      }
      cout << endl;
    }
  }

// Commented by Param 05-04-2026
//  void BFS() {
//    queue<int> que;
//    int s = 0;
//    bool visited_arr[nodes] = {0};
//    for (int i = 0; i < nodes; i++) {
//      if (!que.empty()) {
//        s = que.front();
//        que.pop();
//      }
//      for (int j = 0; j < g.size(); j++) {
//        if (visited_arr[s] == false && 0) {
//          cout << g[i][s] << " ";
//          cout << g[i][j] << " ";
//          que.push(g[i][s]);
//          visited_arr[g[i][s]] = 1;
//        }
//      }
//    }
//  }


  void BFS() {
    // Clean BFS mental model
    // 1. Push start node
    // 2. while queue not empty
    // 3. Pop
    // 4. If not visited -> process + mark
    // 5. Push only unvisited neighbors
    cout << endl << " BFS Printing " << endl;
    queue<int> que;
    int s = 0;
    que.push(s);
    vector<bool> arr(nodes, false);
    while (!que.empty()) {
      s = que.front();
      que.pop();
      if (arr[s] != true) {

        // Print node
        cout << s << " ";

        // Visited[node] = True
        arr[s] = true;

        // Node naoubher added into queue
        for (int i = 0; i < g[s].size(); i++) {
          if (!arr[g[s][i]]) {
            que.push(g[s][i]);
          }

        }
      }
    }
  }


  void DFS_t2() {
    cout << "Depth First Search" << endl;
    stack<int> st;
    int s;
    st.push(0);
    vector<bool> arr(nodes, false);
    while (!st.empty()) {
      s = st.top();
      st.pop();
      if (arr[s] != true) {
        // Print node
        cout << s << " ";

        // Visited[s] = true
        arr[s] = true;

        // Node naoubher added into stack
        for (int i = 0; i < g[s].size(); i++) {
          if (!arr[g[s][i]]) {
            st.push(g[s][i]);
          }
        }
      }
    }
  }

  void DFS() {
    cout << endl << "Depth First Search" << endl;
    stack<int> st;
    int s;
    st.push(0);
    vector<bool> arr(nodes, false);
    while (!st.empty()) {
      cout << endl << "Inside DFS()/while loop" << endl;
      s = st.top();
      cout << "assigned s: " << s << " stack top value" << endl;
      st.pop();
      cout << "poped stack topmost value" << endl;
      if (arr[s] != true) {
        cout << "check what ever if arr[" << s << "] is not visited" << endl;
        // Print node
        cout << "Printing node" << endl;
        cout << s << " ";

        // Visited[s] = true
        cout << "Assigning arr[" << s << "] = true" << endl;
        arr[s] = true;

        // Node naoubher added into stack
        cout << "adding naoubher of g[" << s << "] to stack" << endl;
        for (int i = 0; i < g[s].size(); i++) {
          cout << "checking for naougher g[" << s<< "][" << i << "] is visted or not" << endl;
          if (!arr[g[s][i]]) {
            cout << "Nougher g[" << s<< "][" << i << "] is not visited" << endl;
            st.push(g[s][i]);
            cout << "push it into stack" << endl;
          }
        }
      }
    }
  }

};

int main() {
  cout << " --- Graph Algo Implementation --- " << endl;
// Graph with 7 nodes
  graph g1(7);
   g1.connection(0, 1);
   g1.connection(0, 2);
   g1.connection(1, 3);
   g1.connection(1, 4);
   g1.connection(2, 5);
   g1.connection(2, 6);

//  graph with 5 nodes
//  graph g1(5);
//  g1.connection(0, 1);
//  g1.connection(0, 2);
//  g1.connection(1, 3);
//  g1.connection(1, 4);

  cout<<"Grpah g1" << endl;
  g1.print();
  g1.BFS();
  cout << endl;
  g1.DFS_t2();

  graph g2(10);
  g2.connection(0, 1);
  g2.connection(0, 2);
  g2.connection(1, 3);
  g2.connection(1, 4);
  g2.connection(3, 8);
  g2.connection(8, 9);
  g2.connection(2, 5);
  g2.connection(5, 6);
  g2.connection(6, 7);


  cout << endl << "Graph g2" <<endl;
  g2.print();
  g2.BFS();
  cout << endl;
  g2.DFS_t2();
  return 0;
}
