#include "tree.h"

int main(){

Tree b_tree = Tree();
b_tree.insert(6);
b_tree.insert(10);
b_tree.print_root();

std::cout << std::endl;

if(b_tree.contains(6) == true){
 cout << "found!";
} else {
	cout << "not!";
}

cout << endl;

if(b_tree.contains(5) == true){
 cout << "found!";
} else {
	cout << "not!";
}

cout << endl;

if(b_tree.contains(7) == true){
 cout << "found!";
} else {
	cout << "not!";
}

cout << endl;

b_tree.insert(6);
b_tree.insert(4);

cout << endl;

cout<< "height: " << b_tree.height() << endl;

b_tree.insert(1);
b_tree.insert(2);
b_tree.insert(3);
b_tree.insert(5);
b_tree.insert(7);

b_tree.preorder();
b_tree.inorder();
b_tree.postorder();


cout << endl;
cout << endl;
cout << endl;
cout << b_tree.print_root();


 return 0;	
}
