#include "binary_trees.h"
/**
*binary_tree_node - function
*@parent: padre
*@value: value
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *newnode = NULL;
    newnode = malloc(sizeof(binary_tree_t));
    if(!newnode)
        return (NULL);
    newnode->parent = parent;
    newnode->n = value;
    return (newnode);
}   