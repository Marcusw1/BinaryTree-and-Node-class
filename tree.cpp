#include "tree.h"


Tree::Tree(){
  root = NULL;
  has_root = 0;
}

Tree::~Tree(){
 if(root != NULL){
  delete root;	
 }
}

//---------Standard-Funcs---------//

//insert() and helper function
void Tree::insert(int entry){
 
 if(root==NULL){
  root = new Node();
  root->data = entry;
 } else{

 	Node *temp, *parent;
 	temp = root;
 	while(temp != NULL) {
 	 if(entry < temp->data){
 	  parent = temp;
 	  temp = temp->left;
 	 } else if(entry > temp->data){
 	    parent = temp;
 	    temp = temp->right;
 	 } else if (entry == temp->data){
 	 	cout << "duplicates not allowed" << endl;
 	 	return;
 	 }
 	}

    Node *add_node = new Node();
    add_node->data = entry;
    add_node->left = NULL;
    add_node->right = NULL;

    if(entry < parent->data){
     parent->left = add_node;
    } else {
     parent->right = add_node;	
    } 
  }
 return;
}

//remove and helper function
void Tree::remove(){

}

//contains() and helper function
bool Tree::contains(int value){
 bool contains_value;
 contains_value = search_for(value, root);
 return contains_value;
}

bool Tree::search_for(int value, Node* current){
 if(current == NULL){
  return false;
 } else{
  if(value == current->data){
   return true;
  } else if(value < current->data){
  	return search_for(value, current->left);
  } else if(value > current->data){
  	return search_for(value, current->right);
  }
 }
 return false;
}


//height() and helper function
int Tree::height(){
 int height;
 height = get_height(root);
 return height;
}

int Tree::get_height(Node* current){
 if(current == NULL){
 	return 0;
 } else{
  int left_count = get_height(current->left);
  int right_count = get_height(current->right);

  if(left_count > right_count){
  	return 1+left_count;
  } else {
  	return 1+right_count;
  }
 }

}

void Tree::print_root(){
 cout << root->data;
}


//-------traversal-------//


//preorder() and helper function
void Tree::preorder(){
 preorder_traversal(root);
 cout << endl;
}

void Tree::preorder_traversal(Node* current){
 if(!current){
  return;	
 } else{
  cout << current->data << " ";
  preorder_traversal(current->left);
  preorder_traversal(current->right);	
 }
}


//inorder() and helper function
void Tree::inorder(){
 inorder_traversal(root);
 cout << endl;
}

void Tree::inorder_traversal(Node* current){
 if(!current){
  return;	
 } else{
  preorder_traversal(current->left);
  cout << current->data << " ";
  preorder_traversal(current->right);	
 }
}



//postorder() and helper function
void Tree::postorder(){
 postorder_traversal(root);
 cout << endl;
}

void Tree::postorder_traversal(Node* current){
  if(!current){
  return;	
 } else{
  preorder_traversal(current->left);
  preorder_traversal(current->right);
  cout << current->data << " ";
 }
}
