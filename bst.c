
#include <stdio.h>
#include <stdlib.h>

// Structure of BST node
struct Node {
    int info;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insertion in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->info)
        root->left = insert(root->left, value);
    else if (value > root->info)
        root->right = insert(root->right, value);

    return root;
}

// Find minimum value node
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Deletion in BST
struct Node* deleteNode(struct Node* root, int value) {

    if (root == NULL)
        return root;

    // Search the node to delete
    if (value < root->info)
        root->left = deleteNode(root->left, value);

    else if (value > root->info)
        root->right = deleteNode(root->right, value);

    else {

        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct Node* temp = minValueNode(root->right);

        root->info = temp->info;

        root->right = deleteNode(root->right, temp->info);
    }

    return root;
}

// Inorder Traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}

int main() {

    struct Node* root = NULL;

    // Inserting elements
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("BST Inorder Traversal: ");
    inorder(root);

    // Deleting element
    root = deleteNode(root, 20);

    printf("\nAfter Deleting 20: ");
    inorder(root);

    root = deleteNode(root, 30);

    printf("\nAfter Deleting 30: ");
    inorder(root);

    return 0;
}
