### Data Structures and Algorithms

## 1. Sliding Window Patterns

A collection of optimized solutions for Sliding Window patterns implemented in C++. All problems are solved in linear time $O(N)$ complexity.

### 📁 Problems Covered

#### Fixed-Size Sliding Window

- **LeetCode 643:** Maximum Average Subarray I
- **LeetCode 1876:** Substrings of Size Three with Distinct Characters
- **LeetCode 1456:** Maximum Number of Vowels in a Substring of Given Length
- **LeetCode 1343:** Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
- **HackerRank:** Subarray Division 1
- **GeeksforGeeks:** Max Sum Subarray of size K

#### Variable-Size Sliding Window

- **LeetCode 3 / GeeksforGeeks:** Longest Substring Without Repeating Characters
- **LeetCode 209:** Minimum Size Subarray Sum
- **GeeksforGeeks:** Smallest Subarray with Sum Greater than X
- **LeetCode 1004:** Max Consecutive Ones III
- **LeetCode 904:** Fruit Into Baskets
- **LeetCode 713 / GeeksforGeeks:** Count the Subarrays Having Product Less Than K

### 🚀 Complexity

- **Time Complexity:** $O(N)$ linear tracking time because the right and left boundary pointers process each array index a maximum of two times.
- **Space Complexity:** $O(1)$ constant overhead or $O(K)$ linear space when utilizing unique tracking maps/sets (`std::unordered_set`, `std::unordered_map`) to monitor character frequencies and element states inside dynamic boundaries.

---

## 2. Two-Pointer Architecture

A premium repository tracking optimized linear array traversals utilizing both convergent (inward-moving) and sequential (fast/slow write-state) pointer layouts to achieve maximal memory efficiency.

### 📁 Problems Covered

#### Convergent Traversals (Opposite Ends)

- **LeetCode 167:** Two Sum II - Input Array Is Sorted (Integer overflow prevention with `long long` type-casting)
- **GeeksforGeeks:** Pair with Given Sum in a Sorted Array (Single-Pair bounds tracking)
- **LeetCode 125:** Valid Palindrome (Two-pointer boundary scanning with structural alphanumeric bypass)
- **LeetCode 11 / GeeksforGeeks:** Container With Most Water (Greedy optimal height containment)

#### Sequential & Boundary Modifications (Same-Direction)

- **LeetCode 283 / GeeksforGeeks:** Move All Zeroes to End (In-place index partitioning and trailing buffer management)
- **LeetCode 26:** Remove Duplicates from Sorted Array (Unique element write-state tracking; returns distinct element count)
- **GeeksforGeeks Variant:** Remove Duplicates from Sorted Array (In-place array sequence reduction using structural vector resizing via `.resize()`)
- **CodeChef Variant:** Remove Duplicates (Raw continuous console input processing with strict terminal spacing formatting)

### 🚀 Complexity

- **Time Complexity:** $O(N)$ linear execution time. By avoiding slow structural mutation utilities like nested data-shifting logic, elements are completely scanned, positioned, or modified within a single pass.
- **Space Complexity:** $O(1)$ strict auxiliary space complexity. Modifies vectors directly in-place without generating supplemental storage allocations.
