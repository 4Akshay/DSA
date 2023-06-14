// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
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

int main()
{
	Node* root = NULL;
	root = BuildTree(root);
}

