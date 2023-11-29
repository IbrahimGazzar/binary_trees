#include "binary_trees.h"


/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to be DNA checked
 *
 * Return: the node's sibling if it exists, NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *papa;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	papa = node->parent;
	if (node == papa->left)
		return (papa->right);
	else
		return (papa->left);
}
