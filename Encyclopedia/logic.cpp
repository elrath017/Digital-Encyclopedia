#include "logic.h"
using namespace std;

logic::logic()
{
    root=NULL;
    root=insert(root,"sun","Star","This is the star of the solar system");
    root=insert(root,"earth","planet","This is the planet we live in ");
    root=insert(root,"moon","natural satellite","This is a natural satellite to earth");
    root=insert(root,"jupiter","planet","It is a largest planet of the solar system");
    root=insert(root,"mars","planet","It is a red planet which nearar to earth.");
    root=insert(root,"venus","planet","It is a hottest planet in the solar system.");
    root=insert(root,"halley's","comet","it is a comet it is visible from earth every 75-79 years");
    root=insert(root,"andromeda","galaxy","it is the galaxy nearest to our galaxy");

}

node* logic::create(const string& name,const string& type, const string& details)
{
    node* n1 = new node;
    n1->cb_name = name;
    n1->cb_type =type;
    n1->cb_details = details;
    n1->left = n1->right = NULL;
    return n1;
}


node* logic::insert(node* root, const string& name,const string& type, const string& details)
{
    if (root == NULL)
    {
        root = create(name,type, details);
    }
    else if (name < root->cb_name)
    {
        root->left = insert(root->left, name, type, details);
    }
    else
    {
        root->right = insert(root->right, name, type, details);
    }
    return root;
}

void logic::search(const string& value, string& result) const
{
    node* temp = root;
    while (temp != NULL && temp->cb_name != value)
    {
        if (value < temp->cb_name)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    if (temp != NULL)
    {
        result = "Name: " + temp->cb_name + "\nType: " + temp->cb_type + "\nDetails: " + temp->cb_details;
    }
    else
    {
        result = "Not found";
    }
}
