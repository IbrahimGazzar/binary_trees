#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: root node of the tree to be measured
 *
 * Return: number of leaf nodes of a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
