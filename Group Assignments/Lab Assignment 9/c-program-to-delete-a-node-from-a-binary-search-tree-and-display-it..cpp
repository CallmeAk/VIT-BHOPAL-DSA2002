// This program belongd to 
// Akshat Singh (20BCG10017)


#include<iostream>
using namespace std;
/* A binary search tree node has data, pointer to left child 
and a pointer to right child */
struct Node
{
	int data;
	Node* left;
	Node* right;
	/*For Creating New Node*/
	Node(int val)
	{
		left = NULL;
		right = NULL;
		data = val;
	}
};
/*Insertion Function*/
Node* insert(Node* rt,int val)
{
	if(rt==NULL)
	{
		rt = new Node(val);
	}
	else if(val<=rt->data)
	{
		rt->left = insert(rt->left,val);
	}
	else
	{
		rt->right = insert(rt->right,val);
	}
	return rt;
}

/*Inorder Traversal*/
void inorder(Node* rt)
{
	if(rt!=NULL)
	{
		inorder(rt->left);
		cout<<rt->data<<" ";
		inorder(rt->right);
	}
}
/*For Finding the minimum element in Right Subtree*/
Node* findMin(Node* rt)
{
	Node* c = rt;
	while(c && c->left != NULL)
		c = c->left;
	return c;
}
/*Deletion Function*/
Node* DeleteFun(Node* rt,int val)
{
	if(rt == NULL)
		return NULL;
	else if(val < rt->data)
		rt->left = DeleteFun(rt->left,val);
	else if(val > rt->data)
		rt->right = DeleteFun(rt->right,val);
	else
	{
		if(rt->left == NULL && rt->right == NULL)
		{
			delete rt;
			rt = NULL;
		}
		else if(rt->left == NULL)
		{
			Node* temp = rt->right;
			delete rt;
			rt = temp;
		}
		else if(rt->right == NULL)
		{
			Node* temp = rt->left;
			delete rt;
			rt = temp;
		}
		else
		{
			Node* temp = findMin(rt->right);
			rt->data = temp->data;
			rt->right = DeleteFun(rt->right,rt->data);
		}
		return rt;
	}
}
/* DRIVER FUNCTION */
int main()
{
	int k;
	/*In Insert function root is local thus why we are returning and storing root*/
	/*Initially the Root is NULL*/
	Node* root = NULL;
	root = insert(root,50);
	root = insert(root,30);
	root = insert(root,20);
	root = insert(root,40);
	root = insert(root,70);
	root = insert(root,60);
	root = insert(root,80);
	/* Inorder Traversal of BST is always in Ascending Order*/
	cout<<"Inorder Traversal of Tree is "<<endl;
	inorder(root);
	root = DeleteFun(root,20);
	cout<<"\nAfter Deleting 20"<<endl;
	inorder(root);
	root = DeleteFun(root,30);
	cout<<"\nAfter Deleting 30"<<endl;
	inorder(root);
	root = DeleteFun(root,50);
	cout<<"\nAfter Deleting 50"<<endl;
	inorder(root);
	return 0;
}