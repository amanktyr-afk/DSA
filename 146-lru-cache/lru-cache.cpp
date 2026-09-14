class LRUCache {
public:
      class Node{
        public:
        int key;
        int value;
        Node*prev;
        Node*next;
        Node(int k,int v)
        {
            key=k;
            value=v;
            prev=NULL;
            next=NULL;
        }
      };
      unordered_map<int,Node*>mp;
      Node*head;
      Node*tail;
      int capacity;
      LRUCache(int capacity)
      {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
      }
      void remove(Node* node)
     {
        node->prev->next = node->next;
        node->next->prev = node->prev;
     }
      void insert(Node* node)
      {
        Node*afterhead=head->next;
        head->next=node;
        node->prev=head;
        node->next=afterhead;
        afterhead->prev=node;
      }

     int get(int key)
     {
        if(mp.find(key)==mp.end()) // if not exist key
        return -1;
        Node* node=mp[key];
        remove(node);
        insert(node);
        return node->value;
     }
     void put(int key, int value) 
     {  
        //key already exist
        if(mp.find(key)!=mp.end())
        {
           Node*node=mp[key];
           node->value=value; // change value by given value 
           remove(node);
           insert(node);
           return ;
        }
      // cache full
            if(mp.size()==capacity)
            {  
                // remove LRU
                Node*node=tail->prev;
                mp.erase(node->key);
                remove(node);
                delete node;
            }
            Node*node=new Node(key,value);
            mp[key]=node;
            // new node becomes MRU
            insert(node);
        }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */