#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

// Function prototypes
void dfs_recursive(int node, const map<int, vector<int>> &graph, set<int> &visited);
void dfs_iterative(int start, const map<int, vector<int>> &graph);
void bfs(int start, const map<int, vector<int>> &graph);

int main() {
    // Define the graph as an adjacency list
    map<int, vector<int>> graph = {
        {1, {2, 3}},
        {2, {1, 4, 5}},
        {3, {1, 6, 7}},
        {4, {2}},
        {5, {2}},
        {6, {3}},
        {7, {3}}
    };

    cout << "DFS (Recursive): ";
    set<int> visited;
    dfs_recursive(1, graph, visited);
    cout << endl;

    cout << "DFS (Iterative): ";
    dfs_iterative(1, graph);
    cout << endl;

    cout << "BFS: ";
    bfs(1, graph);
    cout << endl;

    return 0;
}
void bfs(int start, const map<int, vector<int>> &graph) {
    set<int> visited;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (visited.find(node) == visited.end()) {
            cout << node << " "; // Process the node
            visited.insert(node);

            for (int neighbor : graph.at(node)) {
                if (visited.find(neighbor) == visited.end()) {
                    q.push(neighbor);
                    
                    
                }
            }
        }
    }
}

void dfs_iterative(int start, const map<int, vector<int>> &graph) {
    set<int> visited;
    vector<int> stack = {start};

    while (!stack.empty()) {
        int node = stack.back();
        stack.pop_back();

        if (visited.find(node) == visited.end()) {
            cout << node << " " ; // Process the node
            visited.insert(node);

            // Add neighbors in reverse order to maintain correct order
            for (auto it = graph.at(node).rbegin(); it != graph.at(node).rend(); ++it) {
                stack.push_back(*it);
            }
        }
        
    }
}

void dfs_recursive(int node, const map<int, vector<int>> &graph, set<int> &visited) {
    visited.insert(node);
    cout << node; // Process the node

    for (int neighbor : graph.at(node)) {
        if (visited.find(neighbor) == visited.end()) {
            cout << "->";
            dfs_recursive(neighbor, graph, visited);
            
        }
    }
}
