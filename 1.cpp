// Steven Lee Kang Zheng(1191202105) //“preorder, inorder and postorder.”
//PreOrder = A B D E H I C F J K L G
//PostOrder = D H I E B J L K F G C A
//InOrder = D B H E I A J F L K C G

#include <iostream>

using namespace std;

struct BinTreeNode{
	char data;
	BinTreeNode *left;
	BinTreeNode *right;
};

BinTreeNode *initBinTreeNode(char data);
BinTreeNode *root, *Parent1, *Parent2, *Parent3;
void preorder(BinTreeNode *node);
void postorder(BinTreeNode *node);
void inorder(BinTreeNode *node);
void calNodes(BinTreeNode *node);

void growTree() //“growTree.”
{

	root = initBinTreeNode('A');
	root->left = initBinTreeNode('B');
	root->right = initBinTreeNode('C'); 
	
	Parent1 = root->left;
	Parent1->left = initBinTreeNode('D');
	Parent1->right = initBinTreeNode('E'); 
	Parent1 = root->right;
	Parent1->left = initBinTreeNode('F');
	Parent1->right = initBinTreeNode('G');
	
	Parent2 = Parent1->right;
	Parent2->left = initBinTreeNode('H');
	Parent2->right = initBinTreeNode('I'); 
	Parent2 = Parent1->left;
	Parent2->left = initBinTreeNode('J');
	Parent2->right = initBinTreeNode('K');
	 
	Parent3 = Parent1->right;
	Parent3->right = initBinTreeNode('L'); 

}

int main(){
	
	growTree();
	
	cout<<"\nPreorder traversal:\t";  preorder(root);
	cout<<"\nPostorder traversal:\t"; postorder(root);
	cout<<"\nInorder traversal:\t"; inorder(root);
		
	calNodes(root);

	
	return 0;
}

BinTreeNode *initBinTreeNode(char data){
	BinTreeNode *temp;
	temp = new BinTreeNode;
	temp->data  = data;
	temp->left  = NULL;
	temp->right = NULL;
	return temp;
}

void calNodes(BinTreeNode *node){ //“calNodes.”
	if(node)
	{		
		calNodes(node->left);
		calNodes(node->right);
	}
}

void inorder(struct BinTreeNode *node){ //“inorder.”
	if(node){
		inorder(node->left);
		cout<<node->data<<' ';
		inorder(node->right);
	}
	
}

void preorder(BinTreeNode *node){
	if(node){	
		cout<<node->data<<' ';
		preorder(node->left);
		preorder(node->right);
	}
}

void postorder(struct BinTreeNode *node){
	if(node){
		postorder(node->left);
		postorder(node->right);
		cout<<node->data<<' ';
	}
}

