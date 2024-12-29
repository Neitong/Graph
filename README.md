# Graph

## Overview
This project demonstrates graph traversal using Depth-First Search (DFS) and Breadth-First Search (BFS) in C++. The graph is represented as an adjacency list using a `std::map` of vectors.

### Graph Used for Traversal
The graph used for traversal is as follows:
1 - 2 - 4 | | 3 5 | | 6 - 7

This graph is undirected and unweighted, with nodes numbered from 1 to 7.

---

## DFS Traversal

### Process
- **Depth-First Search (DFS)** explores as far as possible along each branch before backtracking.
- Starting from node `1`, the algorithm visits adjacent nodes recursively or using an explicit stack (for iterative implementation).

### Results
- **Recursive DFS Traversal:** `1 -> 2 -> 4 -> 5 -> 3 -> 6 -> 7`
- **Iterative DFS Traversal:** `1 -> 3 -> 7 -> 6 -> 2 -> 5 -> 4`

### Key Insights
- Recursive DFS maintains a clean and straightforward structure but can run into stack overflow for deep graphs.
- Iterative DFS avoids recursion by using an explicit stack, giving more control over traversal order.

---

## BFS Traversal

### Process
- **Breadth-First Search (BFS)** explores all neighbors at the current depth before moving to the next depth level.
- Starting from node `1`, the algorithm processes each level sequentially using a queue.

### Results
- **BFS Traversal:** `1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7`

### Key Insights
- BFS is ideal for finding the shortest path in an unweighted graph.
- It processes nodes in layers, ensuring that all neighbors are visited before moving deeper.

---

## Observations and Insights
1. **Traversal Order Differences:**
   - DFS prioritizes depth, resulting in paths that deeply explore branches before backtracking.
   - BFS prioritizes breadth, visiting nodes level by level.

2. **Use Cases:**
   - **DFS** is useful for problems like topological sorting, connected components, and pathfinding in mazes.
   - **BFS** excels in shortest-path problems in unweighted graphs.

3. **Performance:**
   - Both DFS and BFS have a time complexity of **O(V + E)** for adjacency list representation, where `V` is the number of vertices and `E` is the number of edges.

4. **Graph Representation:**
   - Using an adjacency list makes the implementation memory-efficient, especially for sparse graphs.

---

## How to Run the Program

1. Clone this repository to your local machine.
2. Compile the program:
   ```bash
   g++ dfs_bfs.cpp -o traversal
