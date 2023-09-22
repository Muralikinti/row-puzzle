# row-puzzle

## **Overview**

This C++ Puzzle-Solving project is designed to check if a given puzzle row is solvable. The puzzle row consists of a list of non-negative integers, where each integer represents how many steps you can take to the right or left from its current position within the row. The objective is to determine if, by following these step values and moving within the row, you can reach the rightmost square, which always contains a 0. If it's possible to reach the 0 square, then the puzzle row is considered solvable.

### **How to Use**

- Clone the Repository:

      git clone https://github.com/Muralikinti/row-puzzle.git

- Compile the Code:

      g++ -o row_puzzle main.cpp

- Run the Program:

      ./row_puzzle

- Input Your Puzzle Row:

  - Edit the main function in main.cpp to specify your puzzle row. For example:

        vector<int> puzzle_row = {2, 3, 1, 1, 0};

- View the Result:

  - The program will output whether the puzzle row is solvable or not.

### **Dependencies**

This project has no external dependencies beyond a C++ compiler (e.g., g++).

 
