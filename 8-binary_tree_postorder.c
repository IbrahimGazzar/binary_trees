#include "binary_trees.h"

/**
 * binary_tree_postorder - tree is traversed using the postorder method
 * @tree: pointer to the root of the tree
 * @func: function to call for each node
 *
 * Return: no return value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
