#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a root node with child and parents
 * @value: value to be stored on the created node
 * Return: the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tree_node;

    /* allocate memory and check for failure */
    tree_node = malloc(sizeof(binary_tree_t));
    if (tree_node == NULL)
        return (NULL);
    /* assign value, parent and make left and right NULL */
    tree_node->n = value;
    tree_node->parent = parent;
    tree_node->left = NULL;
    tree_node->right = NULL;

    /* Return the created node */
    return (tree_node);
}