#include<stdio.h>
#include<stdlib.h>
struct bst_node
{
    int data;
    struct bst_node *left;
    struct bst_node *right;
};
struct bst_node *root;
struct bst_node *newnode(int data)
{
    struct bst_node *ptr=(struct bst_node *)malloc(sizeof(struct bst_node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
};
struct bst_node *insert(struct bst_node *root,int data)
{
    if(root==NULL)
        {
            root=newnode(data);
        }
     else if(data<=root->data)
     {
         root->left=insert(root->left,data);
     }
     else
        root->right=insert(root->right,data);
    return root;

};
//search an element in BST
bool search(struct bst_node *root,int data)
{
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data<=root->data) return(search(root->left,data));
    else return(search(root->right,data));
}
struct bst_node *FindMin(struct bst_node *temp)
{
    if(temp->left==NULL && temp->right==NULL) return temp;
    else if(temp->left==NULL)
    {
        return temp;
    }
    else
    {
        return FindMin(temp->left);
    }

};

//Deletion in BST
struct bst_node *del(struct bst_node *root,int data)
{
    if(root==NULL) return root;
    else if(data<root->data) root->left=del(root->left,data);
    else if(data>root->data) root->right=del(root->right,data);
    else { //data is found
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            root=NULL;
        }
        else if(root->left==NULL)
        {
            struct bst_node *temp=root;
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL)
        {
            struct bst_node *temp=root;
            root=root->left;
            free(temp);
        }
        else
        {
            struct bst_node *temp=FindMin(root->right);
            root->data=temp->data;
            root->right=del(root->right,temp->data);
        }
        return root;
    }
};
//Preorder Trevarsal
void Preorder(struct bst_node *root)
{
    if(root==NULL) return;
    else
    {
        printf(" %d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}
//Postorder Trevarsal
void Postorder(struct bst_node *root)
{
    if(root==NULL) return;
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ",root->data);
    }
}
//Inorder Trevarsal
void Inorder(struct bst_node *root)
{
    if(root==NULL) return;
    else
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
}
//Main function
int main()
{   bool t;
    root=insert(root,15);
    root=insert(root,1);
    root=insert(root,121);
    root=insert(root,45);
    root=insert(root,65);
    root=insert(root,31);
    root=insert(root,151);
    root=insert(root,12);
    root=del(root,121);
    root=del(root,31);
    printf("Preorder trevarsal ");
    Preorder(root);
    printf("\nInorder Trevasal ");
    Inorder(root);
    printf("\nPosrorder Trevasal ");
    Postorder(root);
    printf("\nSearching an element  in tree: ");
    t=search(root,14);
    if(t==true) printf("element is present ");
    else printf("element is not present ");
}
