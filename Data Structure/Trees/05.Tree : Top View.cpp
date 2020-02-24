/*
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

void topView(Node *root) {
    map<int,int> hd_to_value;
    queue<Node*> root_address;
    queue<int> integer;

    integer.push(0);
    root_address.push(root);

    while( !root_address.empty() )
    {
        Node* temp = root_address.front();
        if(!hd_to_value.count(integer.front()))
        {
            hd_to_value[integer.front()] = temp->data;
        }
        if( temp->left != nullptr)
        {
            root_address.push(temp->left);
            integer.push(integer.front()-1);
        }
        if( temp->right != nullptr)
        {
            root_address.push(temp->right);
            integer.push(integer.front()+1);
        }

        root_address.pop();
        integer.pop();
    }
    for(auto k:hd_to_value)
    {
        cout<<k.second<<" ";
    }
}

