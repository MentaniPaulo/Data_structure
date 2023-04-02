# Binary Tree Implementation
This repository contains a C++ implementation of a binary tree data structure, along with functions for adding, removing, and printing tree elements in pre-order, in-order, and post-order.

## How to Use
To use the binary tree class, include the header file binaryTree.h and create an instance of the binaryTree class. You can then add elements to the tree using the add_element function, remove elements using the remove_element function, and print elements in pre-order, in-order, and post-order using the corresponding functions.

cpp
Copy code
#include "binaryTree.h"

int main() {
    binaryTree tree;

    // Add elements to the tree
    tree.add_element(5);
    tree.add_element(2);
    tree.add_element(7);

    // Remove an element from the tree
    tree.remove_element(2);

    // Print elements in pre-order, in-order, and post-order
    tree.print_pre_order();
    tree.print_in_order();
    tree.print_pos_order();

    return 0;
}
## Functions
binaryTree() - Constructor for creating a new binary tree object.
~binaryTree() - Destructor for freeing memory used by the binary tree object.
void add_element(int val) - Adds an element with the value val to the binary tree.
void print_pre_order() - Prints the elements of the binary tree in pre-order traversal.
void print_in_order() - Prints the elements of the binary tree in in-order traversal.
void print_pos_order() - Prints the elements of the binary tree in post-order traversal.
void remove_element(int val) - Removes the element with the value val from the binary tree.
int max_depth() - Returns the maximum depth of the binary tree.
node* create_node(int val) - Creates a new node with the given value.
node* insert(node* root, int val) - Inserts a new node with the given value into the binary tree.
void print_pre_order(node* root) - Prints the elements of the binary tree rooted at root in pre-order traversal.
void print_in_order(node* root) - Prints the elements of the binary tree rooted at root in in-order traversal.
void print_pos_order(node* root) - Prints the elements of the binary tree rooted at root in post-order traversal.
node* findMinumum(node* root) - Returns the node with the smallest value in the binary tree rooted at root.
node* remove_element(node* root, int val) - Removes the element with the value val from the binary tree rooted at root.
int max_depth(node* root) - Returns the maximum depth of the binary tree rooted at root.