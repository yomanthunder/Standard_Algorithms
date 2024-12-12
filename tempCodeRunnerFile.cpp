       void insertAtKthNode(int value,int k ){
        Node* newNode = new Node();
        newNode = value;
        if(head==nullptr){
            if(k==1){
                newNode->next=nullptr;
                head = newNode;
            }
        }
        if(k==1){
            newNode->next=head;
            head = newNode;
        }
        Node* temp = head;int cnt=0;
        while(temp!=nullptr){
            if(cnt==k){
                newNode->next = temp->next;
                temp->next = newNode;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return;
       }