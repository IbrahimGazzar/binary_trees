#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to be DNA tested
 *
 * Return: pointer to the uncle node, NULL if it doesn't exist
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandpa = node->parent->parent;
	if (node->parent == grandpa->left)
		return (grandpa->right);
	else
		return (grandpa->left);
}
