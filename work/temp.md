# Data Structures & Algorithms Learning Syllabus

**Language:** C++ (from scratch, no copy-paste)
**Approach:** Build every structure manually, then learn STL equivalent
**Target Timeline:** Apr 2026 – Dec 2026
**Level:** Beginner → Intermediate

---

## PHASE 1: Foundation (Apr – May 2026)

Complete core data structures and basic algorithms. Build from scratch. Focus on understanding, not speed.

### Linear Data Structures

- [x] **Linked List (Singly)**
  - [ ] Doubly Linked List
  - [ ] Circular Linked List
  - [ ] Circular Doubly Linked List

- [x] **Stack**
  - [ ] Stack with Min
  - [ ] Stack with Dynamic Array

- [x] **Queue**
  - [ ] Deque (Double Ended Queue)
  - [ ] Circular Queue
  - [ ] Priority Queue (using Heap)

**Time Estimate:** 2–3 weeks
**Checkpoint:** Implement all 3 linear structures from scratch

---

### Sorting Algorithms

- [ ] **Bubble Sort** ✅ (already done)
- [ ] **Selection Sort**
- [ ] **Insertion Sort**
- [ ] **Merge Sort**
- [ ] **Quick Sort**
- [ ] **Heap Sort** (after learning Heap)

**Time Estimate:** 2–3 weeks (1 algorithm per 2–3 days)
**Checkpoint:** Implement all 6, test with arrays of 1000+ elements

---

### Non-Linear Data Structures

- [x] **Binary Search Tree (BST)**
  - [ ] AVL Tree (self-balancing)
  - [ ] Red-Black Tree (advanced)

- [x] **Graph (Adjacency List)**
  - [ ] Graph (Adjacency Matrix)
  - [ ] Weighted Graph

- [ ] **Heap**
  - [ ] Min Heap
  - [ ] Max Heap
  - [ ] Heap Sort implementation

- [ ] **Hash Table**
  - [ ] Chaining (using Linked List)
  - [ ] Open Addressing

**Time Estimate:** 3–4 weeks
**Checkpoint:** BST insert/search/delete, Hash Table with 100+ entries, Heap operations

---

### Graph Algorithms (BFS, DFS)

- [x] **BFS (Breadth-First Search)**
- [x] **DFS (Depth-First Search)**
- [ ] **Cycle Detection** (using DFS)
- [ ] **Topological Sorting** (Kahn's algorithm)
- [ ] **Connected Components**

**Time Estimate:** 1–2 weeks
**Checkpoint:** Implement BFS/DFS on 10+ node graphs, test cycle detection

---

### Phase 1 Summary
**Total Structures:** 12–15 core implementations
**Total Time:** 8–10 weeks
**End Date:** Late May / Early June 2026

**Completion Criteria:**
- [ ] All Phase 1 structures built from scratch
- [ ] Zero copy-paste in any implementation
- [ ] Code compiles and runs correctly on test cases
- [ ] Can explain algorithm without referring to code

---

## PHASE 2: Interview Readiness (Jun – Jul 2026)

LeetCode problems, pattern recognition, speed optimization.

### LeetCode Easy (1 problem per day)

- [ ] 50 LeetCode Easy problems in C++
  - Focus areas: Arrays, Strings, Linked Lists, Trees, Graphs
  - Time limit: 30–45 min per problem
  - Review time: 15 min (understand optimal solution)

**Time Estimate:** 8 weeks (50 days)
**Checkpoint:** Solve 50 problems, understand patterns

---

### LeetCode Medium (Introduce gradually in week 6+)

- [ ] 20–30 LeetCode Medium problems
  - Focus areas: DFS/BFS, Trees, Dynamic Programming basics
  - Time limit: 45–60 min per problem

**Time Estimate:** 4–5 weeks
**Checkpoint:** Understand 2–3 medium-level patterns

---

### Competitive Programming

- [ ] HackerRank: Complete "Data Structures" module
- [ ] CodeChef: Beginner problems (20–30)
- [ ] Codeforces: Div 2 A/B problems (15–20)

**Time Estimate:** 2–3 weeks (parallel with LeetCode)
**Checkpoint:** Solve 50+ CP problems

---

### System Design Fundamentals (Intro)

- [ ] Big-O Notation (review and mastery)
- [ ] Space vs Time tradeoff concepts
- [ ] Choosing data structures for problems
- [ ] Basic algorithm optimization

**Time Estimate:** 1 week
**Checkpoint:** Can analyze O(n), O(log n), O(n²) tradeoffs

---

### Phase 2 Summary
**Total Problems:** 70–100 (LeetCode + CP)
**Total Time:** 8–10 weeks
**End Date:** Late July 2026

**Completion Criteria:**
- [ ] 50+ LeetCode Easy solved
- [ ] 20+ LeetCode Medium attempted
- [ ] 50+ CP problems solved
- [ ] Comfortable recognizing patterns (two-pointer, sliding window, etc.)

---

## PHASE 3: Intermediate Algorithms (Aug – Sep 2026)

Advanced algorithms and deeper patterns.

### Dynamic Programming (Intro)

- [ ] **0/1 Knapsack Problem**
- [ ] **Coin Change Problem** (min coins)
- [ ] **Longest Increasing Subsequence (LIS)**
- [ ] **Edit Distance** (Levenshtein)
- [ ] **Matrix Chain Multiplication**
- [ ] **Fibonacci (memoization vs tabulation)**

**Time Estimate:** 2–3 weeks
**Checkpoint:** Solve 10+ DP problems from LeetCode Medium/Hard

---

### Graph Algorithms (Advanced)

- [ ] **Dijkstra's Algorithm** (shortest path)
- [ ] **Bellman-Ford Algorithm** (negative weights)
- [ ] **Floyd-Warshall Algorithm** (all pairs shortest path)
- [ ] **Kruskal's Algorithm** (Minimum Spanning Tree)
- [ ] **Prim's Algorithm** (MST)
- [ ] **Union-Find / Disjoint Set Union (DSU)**

**Time Estimate:** 2–3 weeks
**Checkpoint:** Implement Dijkstra and MST algorithms

---

### Searching & Sorting (Advanced)

- [ ] **Binary Search Variants** (rotated array, element insertion point, etc.)
- [ ] **Segment Trees** (range queries)
- [ ] **Fenwick Trees** (Binary Indexed Trees)

**Time Estimate:** 1–2 weeks
**Checkpoint:** Solve 10+ binary search variations

---

### String Algorithms

- [ ] **Pattern Matching** (KMP algorithm)
- [ ] **Trie Data Structure**
- [ ] **Rabin-Karp Algorithm**
- [ ] **Longest Common Subsequence (LCS)**

**Time Estimate:** 1–2 weeks
**Checkpoint:** Implement Trie and KMP

---

### LeetCode Medium (Continued)

- [ ] 50–70 LeetCode Medium problems (parallel with above)
  - Focus on DP, Graphs, Advanced Searching

**Time Estimate:** 8–10 weeks
**Checkpoint:** 70–100 Medium problems solved total

---

### Phase 3 Summary
**Total Algorithms:** 15–20
**Total Time:** 8–10 weeks
**End Date:** Late September 2026

**Completion Criteria:**
- [ ] DP: Can solve knapsack, coin change, LIS
- [ ] Graphs: Dijkstra, MST, DSU implemented
- [ ] Strings: Trie, KMP understood
- [ ] 100+ LeetCode Medium solved

---

## PHASE 4: Mastery & Real Projects (Oct – Dec 2026)

Build non-trivial projects. Contribute to open source. Competitive programming practice.

### Build Real Projects

- [ ] **Project 1: Mini Shell** (command parsing, execution)
  - Concepts: Strings, Parsing, Process management
  - Estimated time: 2 weeks

- [ ] **Project 2: Memory Allocator** (malloc/free implementation)
  - Concepts: Heap management, Linked Lists, Pointers
  - Estimated time: 2 weeks

- [ ] **Project 3: File Compressor** (compression algorithm)
  - Concepts: Huffman Coding, Hash Tables
  - Estimated time: 2 weeks

**Time Estimate:** 6 weeks
**Checkpoint:** 3 projects with clean, documented code

---

### LeetCode Hard (Selective)

- [ ] 10–15 LeetCode Hard problems
  - Focus on contest problems
  - Practice under time pressure

**Time Estimate:** 3–4 weeks
**Checkpoint:** Solve 10+ Hard problems

---

### Competitive Programming Contests

- [ ] Participate in 5–10 online contests (CodeChef, Codeforces, HackerRank)
- [ ] Track rating progression
- [ ] Analyze weak areas after each contest

**Time Estimate:** 4–6 weeks (parallel)
**Checkpoint:** Rating improvement or consistent performance

---

### Code Optimization & Refactoring

- [ ] Review all Phase 1–3 code
- [ ] Refactor into modular, reusable components
- [ ] Add CMake build system
- [ ] Write comprehensive documentation

**Time Estimate:** 2–3 weeks
**Checkpoint:** All code follows professional standards

---

### Phase 4 Summary
**Total Projects:** 3
**Total Time:** 8–10 weeks
**End Date:** Late December 2026

**Completion Criteria:**
- [ ] 3 complete, working projects
- [ ] 10+ LeetCode Hard solved
- [ ] Participated in 5+ contests
- [ ] All code professional-grade on GitHub

---

## Post-Phase 4 (2027+)

### Advanced Topics (Lower Priority, but Important)

- [ ] **Bit Manipulation**
- [ ] **Advanced DP** (digit DP, bitmask DP, tree DP)
- [ ] **Game Theory** (Nim, Grundy numbers)
- [ ] **Geometry Algorithms**
- [ ] **Randomized Algorithms**
- [ ] **NP-Complete Problems** (understanding, not solving)

---

## Quick Reference: Checkboxes by Data Structure

### Completed ✅
- [x] Linked List (Singly)
- [x] Stack
- [x] Queue
- [x] Binary Search Tree
- [x] Graph (Adjacency List)
- [x] BFS
- [x] DFS
- [x] Bubble Sort
- [x] Binary Search

### In Progress 🔄
- [ ] (None currently)

### Phase 1 - Not Started 📋
- [ ] Doubly Linked List
- [ ] Circular Queue
- [ ] Deque
- [ ] Selection Sort
- [ ] Insertion Sort
- [ ] Merge Sort
- [ ] Quick Sort
- [ ] Hash Table
- [ ] Heap (Min/Max)
- [ ] Graph (Adjacency Matrix)
- [ ] Weighted Graph
- [ ] AVL Tree
- [ ] Cycle Detection
- [ ] Topological Sorting
- [ ] Connected Components

### Phase 2 - Not Started 📋
- [ ] LeetCode Easy (50 problems)
- [ ] LeetCode Medium (20-30 problems)
- [ ] HackerRank Module
- [ ] CodeChef Problems
- [ ] Codeforces Problems
- [ ] Big-O Mastery
- [ ] Pattern Recognition

### Phase 3 - Not Started 📋
- [ ] Dynamic Programming (6+ problems)
- [ ] Dijkstra's Algorithm
- [ ] Bellman-Ford
- [ ] Floyd-Warshall
- [ ] Kruskal's Algorithm
- [ ] Prim's Algorithm
- [ ] Union-Find (DSU)
- [ ] Binary Search Variants
- [ ] Segment Trees
- [ ] Fenwick Trees
- [ ] KMP Algorithm
- [ ] Trie Data Structure
- [ ] Rabin-Karp
- [ ] LCS Algorithm
- [ ] LeetCode Medium (50-70 total)

### Phase 4 - Not Started 📋
- [ ] Project 1: Mini Shell
- [ ] Project 2: Memory Allocator
- [ ] Project 3: File Compressor
- [ ] LeetCode Hard (10-15 problems)
- [ ] Competitive Programming Contests (5-10)
- [ ] Code Refactoring & Documentation

---

## Success Metrics

| Milestone | Target | Deadline |
|-----------|--------|----------|
| Phase 1 Complete | 15 core structures | May 31, 2026 |
| 50 LeetCode Easy | 50 problems solved | Jul 31, 2026 |
| Phase 2 Complete | 70-100 total problems | Jul 31, 2026 |
| Phase 3 Complete | Advanced algorithms + 100 Medium | Sep 30, 2026 |
| 3 Projects Built | Mini Shell, Memory Alloc, Compressor | Nov 30, 2026 |
| Phase 4 Complete | 150+ LeetCode, 5+ contests, projects | Dec 31, 2026 |

---

## Resources

### Learning Resources
- CP-Algorithms (cp-algorithms.com) — theory
- GeeksforGeeks — explanations and examples
- LeetCode (leetcode.com) — practice problems
- CodeChef, Codeforces — contests and problems

### Tools
- Editor: Neovim + NvChad
- Compiler: g++ (C++17+)
- Version Control: Git + GitHub
- Build System: CMake

---

## Rules

1. **No copy-paste.** Ever. Write every line.
2. **Debug first.** Don't ask for help until you've spent 30 min debugging.
3. **Understand, don't memorize.** Can you explain without the code?
4. **Test everything.** Edge cases, empty inputs, large inputs.
5. **Document as you go.** Comments in code, README for each project.
6. **Push to GitHub weekly.** Consistency > perfection.

---

**Last Updated:** April 5, 2026
**Next Review Date:** April 19, 2026
**Estimated Completion:** December 31, 2026
