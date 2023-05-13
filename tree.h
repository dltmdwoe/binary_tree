#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value);
Node* insertNode(Node* root, int value);
void printNode(Node* root);
void test();

#endif