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

int sumofnodes(struct tree_node *root){
    int rightsubtree, leftsubtree, sum;

    if (root != NULL){
        leftsubtree = sumofnodes(root->left);
        rightsubtree = sumofnodes(root->right);
        sum = (root->data) + leftsubtree + rightsubtree;
        return sum;
    }
}

int main(){
    int value[9];
    printf("Type in the values: ");
    scanf("%d %d %d %d %d %d %d %d %d", &value[0], &value[1], &value[2], &value[3], &value[4], &value[5], &value[6], &value[7], &value[8]);

    tree_node *n1 = create_node(value[0]);
    tree_node *n2 = create_node(value[1]);
    tree_node *n3 = create_node(value[2]);
    tree_node *n4 = create_node(value[3]);
    tree_node *n5 = create_node(value[4]);

    n1->left = n2;
    n1->right = n3;

    printf("Sum of nodes: %d\n", sumofnodes(n1));


    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}
