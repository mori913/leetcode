#include "stdc++.h"
using namespace std;

struct Node
{
    Node* next;
    int value;
};

int main(){
    Node* header = new Node();
    header->value = 1;
    Node* pointer = header;
    for(int i = 0; i < 3; i++){
       pointer->next = new Node();
       pointer->value = i;
       pointer = pointer->next;
    }
    pointer = header;
    while (pointer != nullptr)
    {
        cout<<pointer->value<<" "<<endl;
        pointer = pointer->next;
    }
    pointer = header;
    while (pointer != nullptr)
    {
        free(pointer);
        pointer = pointer->next;
    }
    return 0; 
}