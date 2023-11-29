#include "binary_trees.h"

/**
 * binary_tree_inorder - tree is traversed using the inorder method
 * @tree: pointer to the root of the tree
 * @func: function to call for each node
 *
 * Return: no return value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
