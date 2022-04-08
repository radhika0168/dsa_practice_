#include<bits/stdc++.h>
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


void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

Node* construct(string s){
    if(s.size()==0){
        return NULL;
    }

    Node* root = new Node(s[0]-'0');

    stack<Node*>st;

    for(int i=1;i<s.size();i++){

        if(s[i]=='('){
            st.push(root);
        }
        else if(s[i]==')'){
            root = st.top();
            st.pop();
        }
        else{
            if(root->left==NULL){
                Node* left = new Node(s[i]-'0');
                root->left = left;
                root = left;
            }
            else if(root->right==NULL){
                Node* right = new Node(s[i]-'0');
                root->right = right;
                root = right;
            }
        }

    }

    return root;

}

int main(){

    string s = "4(2(3))(6(5))";
    
    Node* root = construct(s);
    preorder(root);

    return 0;
}