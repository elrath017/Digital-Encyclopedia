#ifndef LOGIC_H
#define LOGIC_H
#include <string>


struct node
{
    node *left;
    std::string cb_name;
    std::string cb_type;
    std::string cb_details;
    node *right;
};

class logic
{
public:
    logic();

    node* insert(node* root,const std::string& name,const std::string& type, const std::string& details);

    void search(const std::string& value,std::string& result) const;
    node* root;

private:




    node* create(const std::string& name,const std::string& type, const std::string& details);
};

#endif // LOGIC_H
