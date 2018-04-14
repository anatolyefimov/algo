#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
class node {
public:
	T data;
	node* left;
	node* right;
};

template<typename T>
class binary_tree {
public:
	int height(node<T>* cur);
	void insert(T a);
	node<T>* root;
	binary_tree<T>(): root(NULL) {};
};

template <typename T>
int binary_tree<T>::height(node<T>* cur) {
	if (cur == NULL) {
		return 0;
	}
	return max(height(cur->left), height(cur->right)) + 1;
}

int main() {
	binary_tree<int> tree;
//	cout << tree.root;
	cout << tree.height(tree.root);
	return 0;
}
