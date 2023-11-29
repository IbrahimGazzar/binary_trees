#include "binary_trees.h"

/**
 * binary_tree_height_2 - measures the height of a binary tree
 * @tree: pointer to the root of the tree to be measured
 *
 * Return: height of the tree
 */

int binary_tree_height_2(const binary_tree_t *tree)
{
	size_t height_l = 1, height_r = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		height_l = 1 + binary_tree_height_2(tree->left);
	if (tree->right)
		height_r = 1 + binary_tree_height_2(tree->right);
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the root node of the tree to be checked
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_2(tree->left) - binary_tree_height_2(tree->right));
}

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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect or not
 * @tree: pointer to root of the tree to be checked
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
