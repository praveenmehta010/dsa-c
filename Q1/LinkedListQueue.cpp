class Node{
    public:
    int key;
    Node* next{};
};

class LinkedListQueue
{
private:
    Node* listfront{};
    Node* listend{};
public:
    void push(int);
    void pop();
    int peek();
    bool isEmpty();
};

void LinkedListQueue::push(int key){
    Node* temp;
    temp = new Node();
    temp->key = key;

    if(listend == nullptr){
        listfront = temp;
        listend = temp;
    }else{
        listend->next = temp;
        listend = temp;
    }
    temp = nullptr;
};

void LinkedListQueue::pop(){
    if(listend == nullptr){
        return;
    }else if(listend == listfront){
        Node* temp;
        temp = listend;
        listend == nullptr;
        listfront == nullptr;
        delete(temp);
    }else{
        Node* temp;
        temp = listfront;

        listfront = listfront->next;
        delete(temp);        
    }
};
int LinkedListQueue::peek(){    return listfront->key;    };
bool LinkedListQueue::isEmpty(){
    if(listend == nullptr){    return true; };
        return false;
};
