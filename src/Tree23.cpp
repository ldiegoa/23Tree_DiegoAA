#include "Tree23.hh"
//to insert an item, we need a method that can find the correct path to the leaf that corresponds to it.


Tree_23::Tree_23(void){
		root->parent = NULL;
		root->height = 0;
}

node* Tree_23::search(int v){
	
	this->next=root;
	int s,l;
	while (next->height!=0){
		s = next->small_item;
		l = next->large_item;
		
		//checks if is 2 or 1 node
		//if is a 1 node compare the item with its value and chooses one of the two paths
		if(next->middle == NULL && l == NULL){ 
			if(v <= s)
				next = next->left;
			else next = next->right;
		}		
		//if is a 2 node compare the item with its two values and chooses one of the 3 paths
		else{
			if(v <= next->small_item)
				next = next->left;
			else if(v < s && v >= l)
				next = next->middle;
			else
				next = next->right;
		}
	}
	return next;
}

//Now the function insert() has to do the insertion in the 

void Tree_23::insert_item(int x){
	if( root->height == 0 ){
		root->small_item = x;
		root->left = NULL;
		root->right = NULL;
		root->middle = NULL;
		root->height = 1;
	} 
	else{
	
	node* leaf = search(x);
	}

}

