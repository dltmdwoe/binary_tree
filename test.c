#include <stdio.h>
#include "tree.h"

void test() {
    Node* root = NULL;

    
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 9);
    root = insertNode(root, 1);
    root = insertNode(root, 7);

    
    printNode(root);
}