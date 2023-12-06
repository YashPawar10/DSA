#include <vector>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
class Solution {
public:
    vector<Node*>cn;
    void dfs(Node* actual,Node* clone){
        for(auto nb:actual->neighbors){
            if(!cn[nb->val]){
                Node* n=new Node(nb->val);
                clone->neighbors.push_back(n);
                cn[n->val]=n;
                dfs(nb,n);
            }
            else{
                clone->neighbors.push_back(cn[nb->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)return node;
        Node* clone=new Node(node->val);
        cn.resize(105,NULL);
        cn[clone->val]=clone;
        dfs(node,clone);
        return clone;
    }
};