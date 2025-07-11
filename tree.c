#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode *leftChild, *rightChild;
};

struct TreeNode* initializeTreeNode(int value) {
    struct TreeNode* newTreeNode = malloc(sizeof(struct TreeNode));
    newTreeNode->value = value;
    newTreeNode->leftChild = newTreeNode->rightChild = NULL;
    return newTreeNode;
}

void printTree(struct TreeNode* treeRoot) {
    if (treeRoot != NULL) {
        printTree(treeRoot->leftChild);
        printf("%d ", treeRoot->value);
        printTree(treeRoot->rightChild);
    }
}


int main(){
    struct TreeNode* treeRoot = initializeTreeNode(10);
    treeRoot->leftChild = initializeTreeNode(5);
    treeRoot->rightChild = initializeTreeNode(15);


    printTree(treeRoot);
    return 0;
}

}
