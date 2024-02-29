#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node of the tree to measure the size
 * Return: Nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t leftnode, rightnode, sum;

    if (tree == NULL)
        return (0);

    leftnode = binary_tree_size(tree->left);
    rightnode = binary_tree_size(tree->right);
    sum = (leftnode + rightnode) + 1;
    return (sum);
}
