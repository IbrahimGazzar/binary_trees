#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root or not
 * @node: pointer to the node to be checked
 *
 * Return: 1 if root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
