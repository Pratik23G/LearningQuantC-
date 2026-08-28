#include <iostream>


struct LinkedLists {
    int val;
    LinkedLists* next;
};

void printList(LinkedLists* ptr){
    while(ptr != nullptr) {

        std::cout << ptr-> val << "\n";
        ptr = ptr->next;
    }
}

int main()
{
    LinkedLists* head { nullptr };
    head = new LinkedLists;
    head->val = 10;
    head->next = new LinkedLists;

    head->next->val = 20;
    head->next->next = nullptr;

    printList(head);

    delete head->next;
    head->next = nullptr;
    delete head;
    head = nullptr;


    return 0;
}