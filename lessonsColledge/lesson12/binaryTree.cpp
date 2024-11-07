#include <iostream>
using namespace std;

struct TreeNode {
	int data;
	TreeNode* right;
	TreeNode* left;

	TreeNode(int data) {
		this->data = data;
		this->right = nullptr;
		this->left = nullptr;
	}
};

struct BinaryTree {
	TreeNode* root;

	BinaryTree() {
		this->root = nullptr;
	}

	void insert(int data) {
		root = insertRec(root, data);
	}

	TreeNode* insertRec(TreeNode* node, int data) {
		if (node == nullptr)
			return new TreeNode(data);

		if (data < node->data)
			node->left = insertRec(node->left, data);

		else
			node->right = insertRec(node->right, data);

		return node;
	}

	void inorder() {
		inorderRec(this->root);
		cout << endl;
	}

	void inorderRec(TreeNode* node) {
		if (node == nullptr)
			return;
		inorderRec(node->left);
		cout << node->data << ' ';
		inorderRec(node->right);
	}
};

int main() {
	setlocale(LC_ALL, "Rus");

	BinaryTree* tree = new BinaryTree();

	tree->insert(5);
	tree->insert(6);
	tree->insert(10);
	tree->insert(10);
	tree->insert(3);

	tree->inorder();
}