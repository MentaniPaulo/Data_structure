#pragma once

#include <iostream>

//TREE struct 
struct node {
	int data;
	node* left;
	node* right;
};


class binaryTree {
public:
	binaryTree();
	~binaryTree();
	void add_element(int val);
	void print_pre_order();
	void print_in_order();
	void print_pos_order();
	void remove_element( int val);
	int max_depth();


private:
	node* root;

	node* create_node(int val);
	node* insert(node* root, int val);
	void print_pre_order(node* root);
	void print_in_order(node* root);
	void print_pos_order(node* root);
	node* findMinumum(node* root);
	node* remove_element(node* root, int val);
	int max_depth(node* root);
};