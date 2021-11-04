// #include <iostream>
// #include<queue>
// using namespace std;
// struct BstNode{
//  int data;
//  BstNode *left;
//  BstNode *right;
// };
// BstNode* GetNewNode(int data) {
// 	BstNode* newNode = new BstNode();
// 	newNode->data = data;
// 	newNode->left = newNode->right = NULL;
// 	return newNode;
// }
// BstNode* Insert(BstNode* root,int data) {
// 	if(root == NULL) { 
// 		root = GetNewNode(data);
// 	}
 
// 	else if(data <= root->data) {
// 		root->left = Insert(root->left,data);
// 	}
// 	else {
// 		root->right = Insert(root->right,data);
// 	}
// 	return root;
// }
void LevelOrder(BstNode *root){
 queue <BstNode *> contain;
 contain.push(root);
 while(!contain.empty())
    {int length=contain.size();
    int count=0;
    while(count<length){
        BstNode *curr=contain.front();
        
        cout<<curr->data<<" ";
        if(curr->left){
            contain.push(curr->left);
        }
        if(curr->right){
            contain.push(curr->right);
        }
        contain.pop();
        count++;
    }
    cout<<endl;
 }
}
// int main() {
//   BstNode* root = NULL;  
// 	root = Insert(root,15);	
// 	root = Insert(root,10);	
// 	root = Insert(root,40);
// 	root = Insert(root,25);
// 	root = Insert(root,8);
// 	root = Insert(root,12);
//   LevelOrder(root);
//   return 0;
// } 

