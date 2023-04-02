#include "binaryTree.h"

binaryTree::binaryTree():
	root(nullptr)
{
}

binaryTree::~binaryTree()
{
}

void binaryTree::add_element(int val)
{
	if (root == nullptr) {
		root = insert(root, val);
	}
	else {
		insert(root, val);
	}
	
}

void binaryTree::print_pre_order() {
	print_pre_order(root);
}

void binaryTree::print_in_order() {
	print_in_order(root);
}
void binaryTree::print_pos_order() {
	print_pos_order(root);
}

void binaryTree::remove_element(int val)
{
	remove_element(root, val);
}

node* binaryTree::insert(node* root,int val)
{
	if (root == nullptr) {
		return create_node(val);
	}

	if (root->data > val) {
		root->left = insert(root->left, val);
	}

	if (root->data < val) {
		root->right = insert(root->right, val);
	}

	return root;
}

void binaryTree::print_in_order(node* root)
{
	if (root == nullptr) {
		return;
	}

	if (root->left != nullptr) {
		print_in_order(root->left);
	}

	std::cout << "Value: " << root->data << std::endl;
	
	if (root->right != nullptr) {
		print_in_order(root->right);
	}
}

void binaryTree::print_pos_order(node* root)
{
	if (root == nullptr) {
		return;
	}

	if (root->left != nullptr) {
		print_pos_order(root->left);
	}

	if (root->right != nullptr) {
		print_pos_order(root->right);
	}

	std::cout << "Value: " << root->data << std::endl;

}

node* binaryTree::remove_element(node* root, int val){

	if (root == nullptr) {
		return nullptr;
	}

	if (root->data > val) {
		root->left = remove_element(root->left, val);
	}
	else if(root->data < val) {
		root->right = remove_element(root->right, val);
	}
	else {
		if ((root->left == nullptr) && (root->right == nullptr)) {
			delete root;
			return nullptr;
		}

		if (root->left == nullptr) {
			node* temp = root->right;
			delete root;
			return temp;
		}

		if (root->right == nullptr) {
			node* temp = root->left;
			delete root;
			return temp;
		}

		if ((root->left != nullptr) && (root->right != nullptr)) {
			node* temp = findMinumum(root->right);
			root->data = temp->data;
			root->right = remove_element(root->right, val);
		}
	}

}

int binaryTree::max_depth()
{
	return max_depth(root);
}

int binaryTree::max_depth(node* root)
{
	if (root == nullptr) {
		return 0;
	}
	else {
		int depth_left = max_depth(root->left);
		int depth_right = max_depth(root->right);

		if (depth_left > depth_right) {
			return (depth_left + 1);
		}
		else {
			return (depth_right + 1);
		}
	}
	return 0;
}

node* binaryTree::findMinumum(node* root)
{
	node* currentNode = root;
	while (currentNode->left != nullptr) {
		currentNode = currentNode->left;
	}

	return currentNode;
}

void binaryTree::print_pre_order(node* root)
{
	if (root == nullptr) {
		return;
	}

	std::cout << "Value: " << root->data << std::endl;

	if (root->left != nullptr) {
		print_pre_order(root->left);
	}

	if (root->right != nullptr) {
		print_pre_order(root->right);
	}
}

node* binaryTree::create_node(int val)
{
	node* pointer = new node;
	pointer->data = val;
	pointer->left = nullptr;
	pointer->right = nullptr;
	return pointer;
}

