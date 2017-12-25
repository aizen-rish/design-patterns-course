#ifndef TREE_H
#define TREE_H
#if 1
struct node
{
	int key;
	struct node* left;
	struct node* right;
};
typedef struct node node_t;

struct tree
{
	node_t *root;
};
typedef struct tree tree_t; 

void init_tree(tree_t* ptr_tree);
void insert_tree(tree_t* ptr_tree, int key);
void disp_tree(tree_t* ptr_tree);

struct iterator
{
	node_t* root;
	node_t* temp;
};
typedef struct iterator iterator_t;
void init_iterator(iterator_t*, tree_t*);
int has_next(iterator_t*);
int next(iterator_t*); 

#endif

#if 0
#define MAX 1000
struct node
{
	int key;
	int left;
	int right;
};
typedef struct node node_t;

struct tree
{
	int root;
	node_t info[MAX];
	int temp;
};
typedef struct tree tree_t; 

void init_tree(tree_t* ptr_tree);
void insert_tree(tree_t* ptr_tree, int key);
void disp_tree(tree_t* ptr_tree);
#endif

#endif
