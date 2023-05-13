#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        root = createNode(value);
    } else {
        if (value <= root->data) {
            root->left = insertNode(root->left, value);
        } else {
            root->right = insertNode(root->right, value);
        }
    }
    return root;
}

void preorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

void printNode(Node* root) {
    printf("Preorder 순회 결과: ");
    preorderTraversal(root);
    printf("\n");

    printf("Inorder 순회 결과: ");
    inorderTraversal(root);
    printf("\n");

    printf("Postorder 순회 결과: ");
    postorderTraversal(root);
    printf("\n");
}