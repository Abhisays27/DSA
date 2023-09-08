#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Define a class to represent a graph using adjacency list
class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void BFS(int startVertex);

private:
    int vertices;
    vector<vector<int>> adjacencyList;
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjacencyList.resize(vertices);
}

void Graph::addEdge(int v, int w) {
    adjacencyList[v].push_back(w);
}

void Graph::BFS(int startVertex) {
    // Create a boolean array to keep track of visited vertices
    vector<bool> visited(vertices, false);

    // Create a queue for BFS
    queue<int> q;

    // Mark the current node as visited and enqueue it
    visited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty()) {
        // Dequeue a vertex from the queue and print it
        int currentVertex = q.front();
        cout << currentVertex << " ";
        q.pop();

        // Get all adjacent vertices of the dequeued vertex
        // If an adjacent vertex is not visited, mark it visited and enqueue it
        for (int adjacentVertex : adjacencyList[currentVertex]) {
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                q.push(adjacentVertex);
            }
        }
    }
}

int main() {
    // Create a graph with 6 vertices
    Graph g(6);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
