#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full or not
 * @tree: pointer to the root node of the tree to be checked
 *
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int b_left = 0, b_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		b_left = binary_tree_is_full(tree->left);
		b_right = binary_tree_is_full(tree->right);
		if (b_left < b_right)
			return (b_left);
		else
			return (b_right);
	}
	return (0);
}
