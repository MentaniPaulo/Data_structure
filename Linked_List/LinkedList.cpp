#include <iostream>


template<typename type>
struct linked_list {
    type value;
    struct linked_list<type>* next;

    linked_list() {
        value = 0;
        next = nullptr;
    }

    ~linked_list() {
        if (this->next != nullptr) {
            clean(this);
        }  
    }

    void clean(linked_list<type>* node) {

        if (node->next == nullptr)return;

        if (node->next != nullptr) {
            clean(node->next);
            delete node->next;
            node->next = nullptr;
        }
    }

    void add(type element) {
        linked_list* pointer = this;

        if (this->next == nullptr) {
            this->next = new linked_list;
            this->next->value = element;
            return;
        }

        while (pointer->next != nullptr) {
            if (pointer->value == element) {
                break;
            }
            if (pointer->value < element) {

                if (pointer->next == nullptr) {
                    pointer->next = new linked_list;
                }
                else {
                    linked_list* temp = pointer->next;
                    pointer->next = new linked_list;
                    (pointer->next)->next = temp;
                }

                (pointer->next)->value = element;
                break;
            }

        }

    }

    void print_All_Element() {
        linked_list* pointer = this;
        int size_count = 0;
        while (pointer != nullptr)
        {
            size_count++;
            std::cout << "Address: " << (unsigned int)pointer << ", Value: " << pointer->value << std::endl;
            pointer = pointer->next;
        }
    }
   

    int list_size(linked_list<type>* element) {
        linked_list* pointer = element->next;
        int size_count = 0;
        while (pointer != nullptr)
        {
            size_count++;
            pointer = pointer->next;
        }
    }


    linked_list<type>* find_by_value( type value) {
        linked_list* pointer = this;
        while (pointer != nullptr)
        {
            if (pointer->value == value) {
                break;
            }

            if (pointer->value > value) {
                pointer = nullptr;
                break;
            }
            pointer = pointer->next;
        }
        return pointer;
    }
};


int main() {

    {
        linked_list<int> first;
        first.add( 10);

        int second = 20;
        first.add(second);
        first.add(15);


        first.print_All_Element();

        int value = 15;
        linked_list<int>* node = first.find_by_value(value);
        std::cout << "Search " << value << " on Adrress: " <<  (unsigned int)node << std::endl;
    }

    return 0;
}