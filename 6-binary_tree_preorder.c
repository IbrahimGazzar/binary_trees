#include "binary_trees.h"

/**
 * binary_tree_preorder - tree is traversed using the preorder method
 * @tree: pointer to the root of the tree
 * @func: function to call for each node
 *
 * Return: no return value
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
