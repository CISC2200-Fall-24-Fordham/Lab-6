# CISC2200 Spring 2024 Lab6 (none-template version)

In this lab assignment, we practice implementing two member functions for **Binary Search Tree**.
This version does not use **type templating** - see [this old version](https://github.com/CISC2200-Spring2024/lab6/tree/main)
for type templated versions.
The key type is fixed to **string**, and the value type is fixed to **int**.

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command
to download it:

```bash
git clone https://github.com/CISC2200-Fall-24-Fordham/Lab-6.git
```

## Programming Environment Setup

If you haven't done so already, please set up programming environment our our own computer,
by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/).

- The _Commannd Line Tools_ are required.

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements

Please implement the following member functions in the **BSTMap.h**.

1. Implement **get** member function that performs a look up with a key, and it shall return the value.
2. Implement **remove** member function that removes the node with the given key. You can assume the key exists in the BST.
3. Test your functions by adding more testcases in  **main.cpp**.
4. The following are some optional practice questions that you can work on:
    - implement **size** member function to return the total number of nodes in the BST.
    - implement a constructor that takes in an array of Keys and an array of Values, and build a optimal BST.
    - implement a **print** member function to display the nodes in the BST in the ascending order.
    - implement a **checkSearchProperty** member function to check if the calling object (a binary tree) satisfies the binary search property: for any node in the tree, the keys stored in its left subtree are less than the node, and the keys stored in its right subtree are greater than the node.

## Hints

The **main.cpp** provided in this repository tests **remove** and **get** member functions.
Follow the example to write some more testcases as needed to make sure your functions work for different inputs.

## Submission

Submit your **BSTMap.h** file at the following link by April 24, Wednesday, midnight (11:59pm).

[Submission Link](https://storm.cis.fordham.edu:8443/web/project/1960)

The autograder compiles and tests your programs using
some testcases that are different from those in **main.cpp**. If your program fails some testcases, go back to review your code, and test your member functions
with different inputs.
