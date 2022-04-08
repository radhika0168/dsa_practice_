#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    private:
        int size;
        Node* root;

    public:

        // defualt constructor....
        BST(){
            size=0;
            root=NULL;
        }

        // methods...
        void insert(int data){
            root = inserthelper(data,root);
            size++;
        }

        Node* inserthelper(int data, Node* root){
            if(root==NULL){
                return new Node(data);
            }

            if(data<=root->data){
               root->left =  inserthelper(data,root->left);
            }
            else{
               root->right = inserthelper(data,root->right);
            }
            return root;
        }

        // preorder traversal.....
        void preorder(){
            preorderHelper(root);
            cout<<endl;
        }

        void preorderHelper(Node* root){
            if(root==NULL){
                return;
            }
            cout<<root->data<<" ";
            preorderHelper(root->left);
            preorderHelper(root->right);
        }

        // inorder traversal
        void inorder(){
            inorderHelper(root);
            cout<<endl;
        }

        void inorderHelper(Node* root){
            if(root==NULL){
                return;
            }
            
            inorderHelper(root->left);
            cout<<root->data<<" ";
            inorderHelper(root->right);
        }

        // postorder traversal...
        void postorder(){
            postorderHelper(root);
            cout<<endl;
        }

        void postorderHelper(Node* root){
            if(root==NULL){
                return;
            }
            
            postorderHelper(root->left);
            postorderHelper(root->right);
            cout<<root->data<<" ";
        }

};

int main(){
    
    BST b;

    b.insert(1);
    b.inorder();
    b.postorder();
    b.preorder();

    b.insert(72);
    b.inorder();
    // b.postorder();
    // b.preorder();

    b.insert(25);
    b.inorder();
    // b.postorder();
    // b.preorder();

    // b.insert(2);
    // b.inorder();
    // b.postorder();
    // b.preorder();

// b.insert(50);
    // b.inorder();
    // b.postorder();
    // b.preorder();

// b.insert(9);
    // b.inorder();
    // b.postorder();
    // b.preorder();

// b.insert(46);
    // b.inorder();
    // b.postorder();
    // b.preorder();


    return 0;
}