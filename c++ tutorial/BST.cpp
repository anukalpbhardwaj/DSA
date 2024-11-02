#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(Node* root){
        // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<< root->data<< " " ;
    inorder(root->right);
    
    }
    void preorder(Node* root){
        // base case
    if (root == NULL)
    {
        return;
    }
    cout<< root->data<< " " ;
    preorder(root->left);
    
    preorder(root->right);
    
    }
    void postorder(Node* root){
        // base case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data<< " " ;
    

    
    
    }
void levelOrderTraverseal(Node* root)
{

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        // cout << temp->data << " ";
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
            else
            {
                cout << temp->data << " ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
Node *insertIntoBST(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {

        // right part me insert karna hai

        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // left part me insert karrna hai

        root->left = insertIntoBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

cout<<endl<<"Printing the BST" <<endl;
    levelOrderTraverseal(root);
    cout<<"Inoreder traversal is : " <<endl;
    inorder(root);

    cout<<"Preorder traversal is : " <<endl;
    preorder(root);
    cout<<"Post order traversAL IS : " <<endl;
    postorder(root);

    return 0;
}