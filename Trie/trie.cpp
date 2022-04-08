#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    TrieNode* children[26];
    // bool isEOW;
    int EOWcount;

    TrieNode(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        // isEOW = false
        EOWcount=0;
    }
};

class Trie{
    int size;
    TrieNode* root;

    public:
    Trie(){
        root = new TrieNode();
        size=0;
    }

    void insert(string s){
       TrieNode* temp = root;

       for(int i=0;i<s.length();i++){
           char ch = s[i];
           if(temp->children[ch-'a']==NULL){
               temp->children[ch-'a'] = new TrieNode;
           }
           temp = temp->children[ch-'a'];
       } 
    //    temp->isEOW = true;
        temp->EOWcount++;
    }

    int count(string s){
        TrieNode* temp=root;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(temp->children[ch-'a']==NULL){
                return 0;
            }
            temp = temp->children[ch-'a'];
        }
        return temp->EOWcount;
    }

    bool search(string s){
        TrieNode* temp = root;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(temp->children[ch-'a']==NULL){
                return false;
            }
            temp = temp->children[ch-'a'];
        }
        // return temp->isEOW;
        return temp->EOWcount!=0;
    }

    void dfs(){
        dfsHelper(root);
    }

    void dfsHelper(TrieNode* root){
        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                cout<<(char)(i+'a')<<" , ";
                dfsHelper(root->children[i]);
            }
        }
    }
};



int main(){
    Trie t;
    t.insert("radhika");
    t.insert("radhika");
    t.insert("radha");
    t.insert("radha");
    t.insert("devansh");
    t.insert("kulshrestha");
    t.insert("footer");
    t.insert("foot");

    t.dfs();

    cout<<"\n"<<endl;

    cout<<t.search("foot")<<"  "<<t.search("foots")<<"  "<<t.search("radhika")<<"  "<<t.search("Radhika");
    
    cout<<"\ncount: "<<t.count("radhika");
    
    return 0;
}