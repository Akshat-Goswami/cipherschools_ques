class Solution {
  public:
    // Function to check if a key is present in the linked list.
    bool searchKey(int n, Node* head, int key) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == key)
                return true;
            current = current->next;
        }

        return false;
    }
};
