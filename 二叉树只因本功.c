#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Binarynode{
	char data;
	struct Binarynode *Lchild;
	struct Binarynode *Rchild;
}Binary;
int n = 0;
void recursionprintf(Binary *ROOT){
	if(ROOT == NULL){
		return;
	}
	printf("%c\n",ROOT->data);
	recursionprintf(ROOT->Lchild);
		
	recursionprintf(ROOT->Rchild);
	
	if(ROOT->Rchild == NULL && ROOT->Lchild == NULL){
		n++;
	}
}
void getleafnum(Binary *root,int *data){
	if(root == NULL){
		return;
	}
	if(root->Lchild == NULL&&root->Rchild == NULL){
		(*data)++;
	}
	getleafnum(root->Lchild, data);
	getleafnum(root->Rchild, data);
}
int gettreeheight(Binary *root){
	
	if(root == NULL){
		return 0;
	}
	int lheight = gettreeheight(root->Lchild);
	int rheight = gettreeheight(root->Rchild);
	int height = lheight > rheight?++lheight:++rheight;
	return height;
}
Binary *copyBinaynode(Binary *root){
	if(root == NULL){
		return NULL;
	}
	Binary *lnode = copyBinaynode(root->Lchild);
	Binary *rnode = copyBinaynode(root->Rchild);
	
	Binary *copyA = malloc(sizeof(Binary));
	copyA->Lchild = lnode;
	copyA->Rchild = rnode;
	copyA->data = root->data;
	return copyA;
}
void my_free(Binary *root){
	if(root == NULL){
		return;
	}
	my_free(root->Lchild);
	my_free(root->Rchild);
	free(root);
	
}
int main() {
	
	Binary A = {'A',NULL,NULL};
	Binary B = {'B',NULL,NULL};
	Binary C = {'C',NULL,NULL};
	Binary D = {'D',NULL,NULL};
	Binary E = {'E',NULL,NULL};
	Binary F = {'F',NULL,NULL};
	Binary G = {'G',NULL,NULL};
	Binary H = {'H',NULL,NULL};
	A.Lchild = &B;
	A.Rchild = &F;
	F.Rchild = &G;
	G.Lchild = &H;
	B.Rchild = &C;
	C.Lchild = &D;
	C.Rchild = &E;
	Binary *root = &A;
	recursionprintf(root);
	int n2 = 0;
	getleafnum(root, &n2);
	printf("%d\n",n2);
	int height = gettreeheight(root);
	printf("%d\n",height);
	Binary *copyA = copyBinaynode(root);
	recursionprintf(copyA);
	my_free(copyA);
	return 0;
}