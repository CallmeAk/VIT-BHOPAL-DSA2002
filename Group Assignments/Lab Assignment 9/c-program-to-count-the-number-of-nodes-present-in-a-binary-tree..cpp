/* C++ Program for counting the number of nodes in a Tree */
// This program belonge to 
// Akshat Singh (20BCG10017)


#include<iostream>
using namespace std;
struct node *createnode(int key);
int countnodes(struct node *root);
static int count = 0;
struct node
{
    int info;
    struct node *left, *right;
};
class BST
{
    public:
        struct node *createnode(int key)
        {
            struct node *newnode = new node;
            newnode->info = key;
            newnode->left = NULL;
            newnode->right = NULL;
            return(newnode);
        }
        int countnodes(struct node *root)
        {
            if(root != NULL)
            {
                countnodes(root->left);
                count++;
                countnodes(root->right);
            }
            return count;
        }
};
/*
 * Main Function
 */
int main()
{
    BST t1,t2,t3;
    /* Creating first Tree. */
    struct node *newnode = t1.createnode(25);
    newnode->left = t1.createnode(27);
    newnode->right = t1.createnode(19);
    newnode->left->left = t1.createnode(17);
    newnode->left->right = t1.createnode(91);
    newnode->right->left = t1.createnode(13);
    newnode->right->right = t1.createnode(55);
    /* Sample Tree 1:
     *                25
     *             /    \
     *            27     19
     *           / \     / \
     *         17  91   13 55
     */
    cout<<"Number of nodes in tree 1 =  "<<t1.countnodes(newnode);
    cout<<"\n";
    count = 0;
 
    /* Creating second Tree. */
    struct node *node = t2.createnode(1);
    node->right = t2.createnode(2);
    node->right->right = t2.createnode(3);
    node->right->right->right = t2.createnode(4);
    node->right->right->right->right = t2.createnode(5);
    /* Sample Tree 2:   Right Skewed Tree (Unbalanced).
     *               1
     *                \
     *                 2
     *                  \
     *                   3
     *                    \
     *                     4
     *                      \
     *                       5
     */
    cout<<"Number of nodes in tree 2 =  "<<t2.countnodes(node);
    cout<<"\n";
    count = 0;
 
    /* Creating third Tree. */
    struct node *root = t3.createnode(15);
    /* Sample Tree 3- Tree having just one root node.
     *              15
     */
    cout<<"Number of nodes in tree 3 =  "<<t3.countnodes(root);
    return 0;
}