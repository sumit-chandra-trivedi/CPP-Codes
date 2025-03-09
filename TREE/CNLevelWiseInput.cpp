#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data :";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        TreeNode<int> *Front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children of :" << Front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            cout << "Enter the data of child " << i << " of " << Front->data
                 << ":" << endl;
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            Front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        TreeNode<int> *Front = pendingNodes.front();
        pendingNodes.pop();
        cout << Front->data << " : ";
        for (int i = 0; i < Front->children.size(); i++)
        {
            cout << Front->children[i]->data << ",";
            pendingNodes.push(Front->children[i]);
        }
        cout << endl;
    }
}
int sumOfNodes(TreeNode<int> *root)
{
    int ans = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += sumOfNodes(root->children[i]);
    }
    return ans;
}
int numNodes(TreeNode<int> *root)
{
    int ans = 1;

    for (int i = 0; i < root->children.size(); i++)
    {
        ans += numNodes(root->children[i]);
        cout << &ans << " ";
    }
    return ans;
}
int getHeight(TreeNode<int> *root)
{
    int ans = 0;

    for (int i = 0; i < root->children.size(); i++)
    {
        int ans1 = numNodes(root->children[i]);
    }

    return ans + 1;
}
void printAtlevelk(TreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtlevelk(root->children[i], k - 1);
    }
}
int getLeafNodeCount(TreeNode<int> *root)
{
    if(root->children.size()==0)
    {
        return 1;
    }
    int ans=0;
     for (int i = 0; i < root->children.size(); i++)
    {
       ans+=getLeafNodeCount(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    // cout << numNodes(root);
    // printAtlevelk(root, 3);
    // cout << sumOfNodes(root);
    cout<<getLeafNodeCount(root);
}