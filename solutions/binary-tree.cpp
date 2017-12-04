#include <iostream>

using namespace std;

class BinaryTree
{
    private:
    struct Node
    {
        int value;
        Node *left;
        Node *right;
    };
    Node *root;

    public:
    BinaryTree()
    {
        root = NULL;
    }

    void destroyTree(Node *leaf)
    {
        if (leaf != NULL)
        {
            destroyTree(leaf->left);
            destroyTree(leaf->right);
            delete leaf;
        }
    }

    ~BinaryTree()
    {
        destroyTree(root);
    }

    void insert(int data)
    {
        Node* leaf = new Node();
        Node* parent = new Node;
        leaf->value = data;
        leaf->left = NULL;
        leaf->right = NULL;
        parent = NULL;

        if (root == NULL)
        {
            root = leaf;
        }
        else
        {
            Node* curr = root;

            while (curr)
            {
                parent = curr;
                if (leaf->value > curr->value)
                {
                    curr = curr->right;
                }
                else
                {
                    curr = curr->left;
                }
            }
            if (leaf->value < parent->value)
            {
                parent->left = leaf; 
            }
            else
            {
                parent->right = leaf;
            }

        }
    }

    void printInOrder(Node* leaf)
    {
        if (leaf)
        {
            printInOrder(leaf->left);
            cout << leaf->value<<" ";
            printInOrder(leaf->right);
        }
    }

    void inOrder()
    {
        printInOrder(root);
    }

    void printPreOrder(Node* leaf)
    {
        if(leaf)
        {
            cout << leaf->value << " ";
            printPreOrder(leaf->left);
            printPreOrder(leaf->right);
        }
    }

    void preOrder()
    {
        printPreOrder(root);
    }

    void printPostOrder(Node* leaf)
    {
        if (leaf)
        {
            printPostOrder(leaf->left);
            printPostOrder(leaf->right);
            cout << leaf->value<< " ";
        }
    }

    void postOrder()
    {
        printPostOrder(root);
    }

};


int main()
{
    BinaryTree* tree = new BinaryTree();
    tree->insert(30);
    tree->insert(10);
    tree->insert(20);
    tree->insert(40);
    tree->insert(50);
  


    cout << "In order traversal" << endl;
    tree->inOrder();
    cout << endl;
    cout << "Pre order traversal" << endl;
    tree->preOrder();
    cout << endl;
    cout << "Post order traversal" << endl;
    tree->postOrder();
    cout << endl;
    return 0;
}
