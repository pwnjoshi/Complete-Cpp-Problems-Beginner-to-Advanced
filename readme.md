# Search Algorithms Collection

A comprehensive collection of search algorithms implemented in C++ for educational purposes and algorithmic practice.

## 📁 Project Structure

```
IV_SEM_DAA/
├── README.md              # This file
├── index.md               # Detailed file index
├── linear_search_array.cpp        # Linear search with arrays
├── linear_search_vector.cpp       # Linear search with vectors
├── binary_search_array.cpp        # Binary search with arrays
├── binary_search_vector.cpp       # Binary search with vectors
├── binary_search_iterative.cpp    # Binary search iterative approach
├── binary_search_count.cpp        # Binary search with occurrence counting
├── binary_search_first_last_occurrence.cpp  # First/last occurrence search
├── jump_search.cpp               # Basic jump search
├── jump_search_fibonacci.cpp     # Jump search with Fibonacci
├── three_sum_bruteforce.cpp      # Three sum - brute force
├── three_sum_two_pointer.cpp     # Three sum - two pointer technique
└── duplicate_elements.cpp        # Duplicate element handling
```

## 🎯 Algorithms Covered

### Linear Search
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- Sequential search through arrays and vectors

### Binary Search
- **Time Complexity**: O(log n)
- **Space Complexity**: O(1) iterative, O(log n) recursive
- Efficient search on sorted arrays/vectors
- Includes variations for counting occurrences and finding first/last positions

### Jump Search
- **Time Complexity**: O(√n)
- **Space Complexity**: O(1)
- Block-based search algorithm
- Includes Fibonacci-optimized version

### Three Sum Problems
- **Brute Force**: O(n³) time, O(1) space
- **Two Pointer**: O(n²) time, O(1) space
- Finding triplets that sum to a target value

## 🚀 Usage

Each file is a standalone program. To compile and run:

```bash
# Compile a specific algorithm
g++ -o linear_search linear_search_array.cpp

# Run the program
./linear_search

# Or compile and run in one step
g++ -o binary_search binary_search_array.cpp && ./binary_search
```

## 📚 Algorithm Descriptions

### Linear Search
Simple sequential search that checks each element until the target is found or the end is reached.

### Binary Search
Divide-and-conquer algorithm that works on sorted arrays by repeatedly dividing the search interval in half.

### Jump Search
Searches in jumps or blocks, then performs linear search in the identified block.

### Three Sum
Finds all unique triplets in an array that sum to zero (or any target value).

## 🎓 Educational Value

This collection is designed for:
- **Students** learning algorithmic concepts
- **Competitive programmers** practicing search techniques
- **Interview preparation** for technical coding rounds
- **Self-learners** exploring algorithm efficiency

## 📝 Notes

- All programs include user input handling
- Code is well-commented for educational purposes
- Each implementation focuses on clarity and correctness
- Time and space complexity analysis provided in comments

## 🤝 Contributing

Feel free to contribute additional search algorithms or improvements to existing implementations.

## 📄 License

This project is for educational use. Feel free to use and modify the code for learning purposes.