#include <iostream>

template <typename T>
class CustomQueue
{
    private:
        struct Element
        {
            T data;
            Element* next;
        };
        
        Element* head;
        Element* tail;
    
    public:
        // Default constructor - initialize empty queue
        CustomQueue() : head(nullptr), tail(nullptr) {}
        
        // Delete copy operations to prevent shallow copy issues
        // Shallow copy would cause double-delete and dangling pointer bugs
        CustomQueue(const CustomQueue&) = delete;
        CustomQueue& operator=(const CustomQueue&) = delete;
        
        // Destructor - free all remaining nodes to prevent memory leaks
        ~CustomQueue()
        {
            while (head != nullptr)
            {
                Element* temp = head;
                head = head->next;
                delete temp;
            }
        }
        
        void push(T data)
        {
            // Create new element with data and null next pointer
            Element* new_element = new Element{data, nullptr};
            
            if (head == nullptr)  // Empty queue
            {   
                head = new_element;
                tail = new_element;
            }
            else  // Non-empty queue
            {
                // Link old tail to new element, then update tail
                tail->next = new_element;
                tail = new_element;
            }
        }
        
        T pop()
        {
            if (head == nullptr) 
            {
                throw std::runtime_error("Cannot pop from empty queue");          
            }       
            
            // Save data before deleting node
            T data_to_return = head->data;
            
            // Save old head for deletion
            Element* old_head = head;
            
            // Move head forward
            head = head->next;  
            
            // If queue now empty, update tail to nullptr
            if (head == nullptr)
            {
                tail = nullptr;
            }
            
            // Free memory and return data
            delete old_head;
            return data_to_return;
        }
        
        bool empty() const
        {
            return head == nullptr;
        }
};
