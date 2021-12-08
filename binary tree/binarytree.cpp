#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* root;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node* root, int data){
    if(root==NULL){
        return new Node(data);
    }
    int num;
    cout<<"Enter 1 for left node otherwise press 2 ";
    cin>>num;
    if(num==1){
        root->left = insert(root,data);
    }
    else {
        root->right = insert(root,data);
    }
    return root;
}

int main(){
    // Node* root = new Node(1);
    // root->left =  new Node(2);
    // root->right = new Node(3);
    // root->left->right = new Node(5);
    // root->right->left = new Node(4);
    // root->right->left->right = new Node(7);
    // root->right->right = new Node(6);
    // cout<<root->data;
    int n,data;
    Node* root = NULL;
    cin>>n;
    while(n--){
        cout<<"enter data: ";
        cin>>data;
        root = insert(root,data);
    }
    return 0;
}