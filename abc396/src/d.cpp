#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v;
    long long w;

    Edge(int _u, int _v, long long _w) : u(_u), v(_v), w(_w) {}
};

// Function to find all simple paths from src to dest
void findAllPaths(const vector<vector<pair<int, long long>>>& graph,
        int src, int dest, vector<bool>& visited,
        vector<long long>& xorValues, long long currentXor) {

    // Mark current vertex as visited
    visited[src] = true;

    // If we've reached the destination
    if (src == dest) {
        xorValues.push_back(currentXor);
    } else {
        // Explore all adjacent vertices
        for (const auto& edge : graph[src]) {
            int nextVertex = edge.first;
            long long weight = edge.second;

            if (!visited[nextVertex]) {
                // Recursive call with updated XOR value
                findAllPaths(graph, nextVertex, dest, visited, xorValues, currentXor ^ weight);
            }
        }
    }

    // Backtrack: mark current vertex as unvisited
    visited[src] = false;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Create adjacency list (1-indexed)
    vector<vector<pair<int, long long>>> graph(n + 1);

    // Read edges
    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;

        // Add edges to the graph (undirected)
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    // Find all simple paths from vertex 1 to vertex n
    vector<bool> visited(n + 1, false);
    vector<long long> xorValues;

    // Start with XOR value 0
    findAllPaths(graph, 1, n, visited, xorValues, 0);

    // Find minimum XOR value
    long long minXor = LLONG_MAX;
    if (!xorValues.empty()) {
        minXor = *min_element(xorValues.begin(), xorValues.end());
    }

    // Print result
    cout << minXor << endl;

    return 0;
}
