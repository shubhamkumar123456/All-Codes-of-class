#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Graph {
    int n; 
    vector<vector<int>> adjList;
    vector<vector<int>> adjMatrix;
};

void initGraph(Graph &g, int n) {
    g.n = n;
    g.adjList.resize(n);
    g.adjMatrix.assign(n, vector<int>(n, 0));
}

void addEdge(Graph &g, int u, int v) {
    g.adjList[u].push_back(v);
    g.adjList[v].push_back(u); 

    g.adjMatrix[u][v] = 1;
    g.adjMatrix[v][u] = 1;
}

void printAdjList(Graph &g) {
    cout << "Adjacency List:\n";
    for (int i = 0; i <g.n; i++) {
        cout << i << " -> ";
        for (int v : g.adjList[i]) {
            cout << v << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

// Print adjacency matrix
void printAdjMatrix(Graph &g) {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < g.n; i++) {
        for (int j = 0; j < g.n; j++) {
            cout << g.adjMatrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void DFS(Graph &g, int u, vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";
    for (int v : g.adjList[u]) {
        if (!visited[v]) {
            DFS(g, v, visited);   // recursive call
        }
    }
}

void DFS(Graph &g, int start) {
    vector<bool> visited(g.n, false);  // corrected
    cout << "DFS: ";
    DFS(g, start, visited);
    cout << "\n";
}

void BFS(Graph &g, int start) {
    vector<bool> visited(g.n, false);  // corrected
    queue<int> q;
    cout << "BFS: ";
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : g.adjList[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << "\n";
}

int main() {
    int n,m;
    cout<<"Enter number of nodes(vertices n) and edges (m) : ";
    cin >> n >> m;

    Graph g;
    initGraph(g,n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;          // convert to 0-based
        addEdge(g, u, v);
    }

    printAdjList(g);
    printAdjMatrix(g);

    int start;
    cin >> start;
    start--;                // convert to 0-based

    BFS(g, start);
    DFS(g, start);
}
