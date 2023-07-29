    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = arr.size()-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;          
        }
        return true;
    }

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
            // create an array 
        vector<int> arr;
        //copy values of LL to array 
        LinkedListNode<int> *temp = head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
        
    }