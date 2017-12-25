#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#if 1
void init_tree(tree_t* ptr_tree)
{
	ptr_tree->root = NULL;
}
node_t* make_node_(int key)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}
node_t* insert_(node_t* root, node_t* temp)
{
	if(root == NULL)
	{
		root = temp;
	}
	else if(temp->key < root->key)
	{
		root->left = insert_(root->left, temp);
	}
	else
	{
		root->right = insert_(root->right, temp);
	}
}
void insert_tree(tree_t* ptr_tree, int key)
{
	// make a node
	node_t* temp = make_node_(key);
	// insert
	ptr_tree->root = insert_(ptr_tree->root, temp);
}

// inorder
void disp_(node_t* root)
{
	if(root)
	{
		disp_(root->left);
		printf("%d ", root->key);
		disp_(root->right);
	}
}

void disp_tree(tree_t* ptr_tree)
{
	printf("tree has \n");
	disp_(ptr_tree->root);
	printf("\n");
}
node_t* minValue(node_t* node) {
  node_t* current = node;
  
  /* loop down to find the leftmost leaf */
  while (current->left != NULL) {
    current = current->left;
  }
  return current;
}
node_t* inOrderSuccessor(node_t *root, node_t *n)
{
    // step 1 of the above algorithm
    if( n->right != NULL )
        return minValue(n->right);
 
    node_t *succ = NULL;
 
    // Start from root and search for successor down the tree
    while (root != NULL)
    {
        if (n->key < root->key)
        {
            succ = root;
            root = root->left;
        }
        else if (n->key > root->key)
            root = root->right;
        else
           break;
    }
     return succ;
}
void init_iterator(iterator_t* ptr_it, tree_t* ptr_tree)
{
	ptr_it->root = ptr_tree->root;
	ptr_it->temp = minValue(ptr_it->root);
}
int has_next(iterator_t* ptr_it)
{
	return ptr_it->temp != NULL;
}
int next(iterator_t* ptr_it)
{
	int key = ptr_it->temp->key;
	ptr_it->temp =  inOrderSuccessor(ptr_it->root, ptr_it->temp);
	return key;
} 

#endif

#if 0
void init_tree(tree_t* ptr_tree)
{
	ptr_tree->root = -1;
	ptr_tree->temp = 0;
}
int insert_(node_t info[], int root, int temp)
{
	if(root == -1)
	{
		root = temp;
	}
	else if(info[temp].key < info[root].key)
	{
		info[root].left = insert_(info, info[root].left, temp); 
	}
	else
	{
		info[root].right = insert_(info, info[root].right, temp); 
	}
	return root;
}
void insert_tree(tree_t* ptr_tree, int key)
{
	int temp = ptr_tree->temp++;
	ptr_tree->info[temp].key = key;
	ptr_tree->info[temp].left = -1;
	ptr_tree->info[temp].right = -1;
	ptr_tree->root = insert_(ptr_tree->info, ptr_tree->root, temp);
}

void disp_(node_t info[], int root)
{
	if(root != -1)
	{
		disp_(info, info[root].left);
		printf("%d ", info[root].key);
		disp_(info, info[root].right);
	}
}
void disp_tree(tree_t* ptr_tree)
{
	printf("tree is \n");
	disp_(ptr_tree->info, ptr_tree->root);
	printf("\n");
}
#endif




