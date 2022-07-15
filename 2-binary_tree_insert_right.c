#include "binary_trees.h"
/**
*binary_tree_insert_left - function
*@parent: padre
*@value: value
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
    binary_tree_t * newnode = NULL;
    binary_tree_t * aux = NULL;

    if (!parent)
        return (NULL);
    newnode = malloc(sizeof(binary_tree_t));
    if (!newnode)
        return (NULL);
    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = parent;
    if(parent->right){
        aux = parent->right;
        aux->parent = newnode;
        newnode->right = aux;
        parent->right = newnode;
        return (newnode);
    }
    else{
        parent->right = newnode;
        return (newnode);
    }
}