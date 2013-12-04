#include <iostream>

typedef struct Tnode{

	int small_item, large_item;
	Tnode *left, *right, *middle, *parent;
	int height;

} node;


class Tree_23{

	node *root, *next;
	
	void insert_item(int v);
	//void delete_item(int v);
	Tree_23(void);
	private:
	
	node *search(int v);
};
