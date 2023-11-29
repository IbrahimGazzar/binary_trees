#include "binary_trees.h"


/**
 * tree_is_perfect - helper function for the perfect tree checker
 * @tree: pointer to root of the tree to be checked
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int count_left = 0, count_right = 0;

	if (tree->left != NULL && tree->right != NULL)
	{
		count_left = 1 + tree_is_perfect(tree->left);
		count_right = 1 + tree_is_perfect(tree->right);
		if (count_left == count_right && count_left > 0 && count_right > 0)
			return (count_left);
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect or not
 * @tree: pointer to root of the tree to be checked
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree_is_perfect(tree) != 0)
		return (1);
	return (0);
}
