#include <iostream>
#include "binaryTree.h"

int main() {

	binaryTree tree;

	tree.add_element( 10);
	tree.add_element( 11);
	tree.add_element( 7);
	tree.add_element( 12);
	tree.add_element( 2);
	tree.add_element( 3);
	tree.add_element( 5);
	tree.add_element( 6);
	tree.add_element( 19);
	
	std::cout << "Print pre order" << std::endl;
	tree.print_pre_order();

	tree.remove_element( 11);

	std::cout << "Print in order" << std::endl;
	tree.print_in_order();

	std::cout << "Print pos order" << std::endl;
	tree.print_pos_order();

	std::cout << "Max depth: " << tree.max_depth() << std::endl;

}
