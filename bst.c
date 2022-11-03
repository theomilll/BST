#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node {
    int data;
    struct tree_node *left;
    struct tree_node *right;
} tree_node;

tree_node *create_node(int data) {
    tree_node* result = malloc(sizeof(tree_node));
    if(result != NULL){
        result->data = data;
        result->left = NULL;
        result->right = NULL;
    }
    return result;
}

int isBST(struct tree_node *root){
    if(root->data == - 1)
        return 1;
    if (root->left != NULL){
        if (root->left->data > root->data){
            return 0;
        }
        isBST(root->left);
    }
    if (root->right != NULL){
        if (root->right->data < root->data && root->right->data != -1){
            return 0;
        }
        isBST(root->right);
    }

}

int main(){
    int value[8];
    scanf("%d %d %d %d %d %d %d %d", &value[0], &value[1], &value[2], &value[3], &value[4], &value[5], &value[6], &value[7]);

    tree_node *n1 = create_node(value[0]);
    tree_node *n2 = create_node(value[1]);
    tree_node *n3 = create_node(value[2]);
    tree_node *n4 = create_node(value[3]);
    tree_node *n5 = create_node(value[4]);
    tree_node *n6 = create_node(value[5]);
    tree_node *n7 = create_node(value[6]);
    tree_node *n8 = create_node(value[7]);

    n1->left = n2;
    n1->right = n3;

    if (isBST(n1) == 1){
        printf("VERDADEIRO");
    }
    else{
        printf("FALSO");
    }

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    free(n7);
    free(n8);
}
