#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include "bst.h"


int main()
{
BST = bst_new();
Tree *tree = &bst;
tree = bst_add_node(tree,50);
tree = bst_add_node(tree,20);
tree = bst_add_node(tree,30);
tree = bst_add_node(tree,60);
tree = bst_add_node(tree,70);
tree = bst_add_node(tree,35);
tree = bst_add_node(tree,40);

assert(tree->count == 7);

assert(lookup(tree,50)==1);
assert(lookup(tree,90)==0);

tree = delete_node(tree,35);
assert(tree->count == 6);

tree = delete_node(tree,35);

printf("In-order: ");
tree_inorder(tree); 
printf("\nPre-order: ");
tree_preorder(tree);
printf("\nPost-order: ");
tree_postorder(tree);
printf("\nlevel-order: ");
tree_levelorder(tree);
printf("\n");

assert(tree_height(tree)==4);

assert(find_min(tree)==20);
assert(find_max(tree)==70);

printf("\n");
printf("Ascending Order: ");
tree_ascending(tree);


printf("\n");
printf("Descending Order: "); 
tree_descending(tree); 


return 0 ;

}
