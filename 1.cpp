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


