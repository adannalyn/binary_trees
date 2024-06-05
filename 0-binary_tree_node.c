#include "binary_trees.h"
#include <stddef.h>
/**
 *binary_tree_node - create a new tree
 * @parent: parent node
 * @value: value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent = NULL || value = parent->value)
		return parent;
	if (value < parent->value)
		return binary_tree_node(parent->left, value);
	else
		return binary_tree_node(parent->right, value);
