#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
