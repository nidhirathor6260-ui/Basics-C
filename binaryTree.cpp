#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
     int data;
     Node* left;
     Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right= nullptr;
    }
};

int idx = -1;
Node* binaryTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = binaryTree(preorder);
    root->right = binaryTree(preorder);

    return root;
}

void preorderseq(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorderseq(root->left);
    preorderseq(root->right);
}

void inorder(Node* root){

    if( root == NULL ) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void postorder(Node* root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node* root){
    if(root == NULL) return 0;

    int leftheight = height(root->left);
    int rightheight = height(root->right);

    return max(leftheight, rightheight) + 1;
}

void kthLevel(Node* root, int k){
    if(root == NULL) return;

    if(k == 1) cout << root->data << " ";
    kthLevel(root->left , k-1);
    kthLevel(root->right , k-1);

}

int countNodes(Node* root){
    if(root == NULL) return 0;

    int leftcount = countNodes(root->left);
    int rightcount = countNodes(root->right);

    return leftcount + rightcount + 1;
}

int countLeaves(Node* root) {
        // write code here
        if(root == NULL) return 0;
        if(root->left == NULL && root->right==NULL){
              return 1;
        }
        int leftleaves = countLeaves(root->left);
        int rightleaves = countLeaves(root->right);
        return leftleaves + rightleaves;
    }


int sum(Node* root){
    if(root == NULL) return 0;
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);

    return leftsum + rightsum + root->data;
}

int main(){
    vector<int> preorder = {1 , 2 ,-1 ,-1 ,3 ,-1, -1};
    Node* root = binaryTree(preorder);

    cout<< "Root: " << root->data  << "\n";
    cout<< "Left child: "<< root->left->data << "\n";
    cout<< "Right child: " << root->right->data << "\n";

    cout << "Inorder sequence: " ; 
    inorder(root) ; 
    cout << "\n";
    cout <<"Preorder sequence: " ; 
    preorderseq(root);
    cout << "\n";
    cout <<"Postorder sequence: " ;
    postorder(root);
    cout << "\n";

    cout << "Number of Levels in Tree : " << height(root)<< "\n";
    cout << "Number of Nodes: " << countNodes(root) << "\n";
    cout << "Sum of all the Nodes: " << sum(root)<< "\n";


    return 0;
}