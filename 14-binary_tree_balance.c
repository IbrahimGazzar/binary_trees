#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the root node of the tree to be checked
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_left = 0, balance_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		balance_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		balance_right = 1 + binary_tree_balance(tree->right);
	return (balance_left - balance_right);
}
