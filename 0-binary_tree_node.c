#include "binary_trees.h"
/**
 * binary_tree_node - create a new tree
 * @parent: parent node
 * @value: value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent->left = NULL;
	parent->right = NULL;
	parent->n = value;
	parent->left = parent->right = NULL;
	return parent;
}
