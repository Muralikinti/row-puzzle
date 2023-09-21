#include <iostream>
#include <vector>

using namespace std;

bool row_puzzle_helper(vector<int>& row, vector<bool>& visited, int index) {
    // If the current index is the rightmost square (0), return true.
    if (row[index] == 0) {
        return true;
    }

    // Mark the current index as visited.
    visited[index] = true;

    // Try moving to the right.
    int right = index + row[index];
    if (right < row.size() && !visited[right]) {
        // Explore the path after moving right.
        if (row_puzzle_helper(row, visited, right)) {
            return true;
        }
    }

    // Try moving to the left.
    int left = index - row[index];
    if (left >= 0 && !visited[left]) {
        // Explore the path after moving left.
        if (row_puzzle_helper(row, visited, left)) {
            return true;
        }
    }

    // Undo the marking of the current index.
    visited[index] = false;

    return false;
}

bool row_puzzle(vector<int>& row) {
    // Initialize a vector to keep track of visited indices.
    vector<bool> visited_square(row.size(), false);

    // Start from index 0.
    return row_puzzle_helper(row, visited_square, 0);
}

int main() {
    // Example usage:
    vector<int> puzzle_row = {2, 3, 1, 1, 0};
    bool isSolvable = row_puzzle(puzzle_row);

    if (isSolvable) {
        cout << "The puzzle row is solvable." << endl;
    } else {
        cout << "The puzzle row is not solvable." << endl;
    }

    return 0;
}
