#include "iostream"
#include "cstdlib"

class Node
{
    public:
        Node* next;
        int data;
};

class linkedL
{
    public:
        int lenght;
        Node* head;

        linkedL();
        ~linkedL();
        void add(int data);
        void print();
};


linkedL::linkedL()
{
    this->lenght = 0;
    this->head = NULL;
}

linkedL::~linkedL()
{
    std::cout << "List deleted\n";
}


void linkedL::add(int data)
{
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->lenght++;
}

void linkedL::print()
{
    Node* head = this->head;
    int i = 1;
    while (head)
    {
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}


int main(int argc, char const *argv[])
{
    linkedL* list = new linkedL();

    for(int i=0; i < 100; ++i)
    {
        list->add(rand() % 100);
    }

    list->print();
    std::cout << "List lenght: " << list->lenght << std::endl;
    delete list;
    return 0;
}