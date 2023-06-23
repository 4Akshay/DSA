// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <queue>
//#pragma pack(1)
using namespace std;

class Node
{
public:
	Node();
	Node(int);
	~Node();
public:
	int data;
	Node* left = NULL;
	Node* right = NULL;
};

Node::Node(): data(0) {}

Node::Node(int data)
{
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}

Node::~Node() {}

Node* BuildTree(Node* root)
{
	int inputData;
	cout << "Enter the data:";
	cin >> inputData;

	root = new Node(inputData);

	if (inputData == -1)
		return NULL;

	cout << "Enter data for inserting in left of " << inputData << endl;
	root->left = BuildTree(root->left);
	cout << "Enter data for inserting in right of " << inputData << endl;
	root->right = BuildTree(root->right);

	return root;
}

void printLevelOrder(Node* root)
{
	queue<Node*>printNode;
	printNode.push(root);
	while (!printNode.empty())
	{
		Node* current = printNode.front();
		cout << current->data << " ";
		printNode.pop();
		//if (current != )
		if (current->left != NULL)
		{
			printNode.push(current->left);
		}
		if (current->right != NULL)
		{
			printNode.push(current->right);
		}
	}
}

class  classSize
{
	char c;
	int a;
	char b;

public:
	 classSize();
	~ classSize();

private:

};

 classSize:: classSize()
{
}

 classSize::~ classSize()
{
}

int main()
{
	Node* root = NULL;
	root = BuildTree(root);
	printLevelOrder(root);
	return 0;
}

 