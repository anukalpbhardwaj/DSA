#include<iostream>
using namespace std;
class TrieNode{

public:

char data;
TrieNode* children [26];
bool isTerminal;
TrieNode(char ch){

    data = ch;
    for (int i = 0; i < 26; i++)
    {
        children[i] = NULL;
        
    }
    isTerminal = false;
    
}

};
class trie{

public:

TrieNode* root;

trie(){
    root = new TrieNode('\0');
}

void insertUtil(TrieNode* root, string word){

//base case
if (word.length() == 0)
{
    root->isTerminal = true;
    return;
}
//assumption , words will be in caps
int index = word[0] - 'A';
TrieNode* child ;

//present case
if (root->children[index] !=NULL)
{
    child = root->children[index];
}
else{
    child = new TrieNode(word[0]);
    root->children[index] = child;
}
//Recursion
insertUtil(child,word.substr(1));


}

void insertWord(string word){
    insertUtil(root, word);
}

bool searchUtil(TrieNode* root, string word){
    //base case
    if (word.length() ==0)
    {
        return root-> isTerminal;
    }
    int index = word[0] - 'A';

TrieNode* child;

//present
if (root-> children[index] !=NULL)
{
    child = root->children[index];
}
else{
    //absent 

    return false;
}
//recursion
return searchUtil(child,word.substr(1));


}

bool searchWord (string word){
    return searchUtil(root,word);
}
};



int main() {


trie * t = new trie();
t->insertWord("ARM");
t->insertWord("DO");
t->insertWord("TIME");

cout<<"Present  or Not " <<t->searchWord("ARM") <<endl;
return 0;
}