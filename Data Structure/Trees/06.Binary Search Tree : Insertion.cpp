

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    void insert1(Node *root, int data)
    {
        if(data<=root->data)
        {
            if(root->left!=NULL)
            {
                insert(root->left,data);
            }
            else{
                root->left=new Node(data);
                root->left->left=NULL;
                root->left->right=NULL;

            }
        }
        else if(data>root->data)
        {
            if(root->right!=NULL)
            {
                insert(root->right,data);
            }
            else{
                root->right =new Node(data);
                root->right->left=NULL;
                root->right->right=NULL;
            }
        }
    }

    Node * insert(Node * root, int data) {
        if(root==NULL)
        {
            root=new  Node(data);
            root->left=NULL;
            root->right=NULL;
        }
        else
        insert1(root,data);
        return root;
    }

