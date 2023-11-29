#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the root node of the tree to be checked
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int b_left = 0, b_right = 0;
	binary_tree_t *ptr_left, *ptr_right;

	if (tree == NULL)
		return (0);
	ptr_left = tree->left;
	while (ptr_left != NULL)
	{
		b_left++;
		ptr_left = ptr_left->left;
	}
	ptr_right = tree->right;
	while (ptr_right != NULL)
	{
		b_right++;
		ptr_right = ptr_right->right;
	}
	return (b_left - b_right);
}
