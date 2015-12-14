#ifndef __TREE_H__
#define __TREE_H__

#include "node.h"

#include <iostream>
using namespace std;

class Tree{

  private:
   Node* root;
   int has_root;

   bool empty();
   void insert_entry(int, Node*);
   bool search_for(int, Node*);
   int get_height(Node*);
   void preorder_traversal(Node*);
   void inorder_traversal(Node*);
   void postorder_traversal(Node*);
  public:
    Tree();
   ~Tree();

  //standard methods
   void insert(int);
   void remove();
   bool contains(int);
   int height();
   void print_root();
  
  //traversal
   void preorder();
   void inorder();
   void postorder();
};

#endif
