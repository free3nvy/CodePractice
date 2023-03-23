/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {


public:
    // 链表也要自己定义咯
    struct LinkedNode
    {
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };
    


    MyLinkedList() {
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        // 先判断是否符合咯
        if (index >_size - 1 || index < 0)
        {
            return -1;
        }
        LinkedNode* cur = _dummyHead->next;
        while (index--)
        {
            cur = cur->next;
        }
        return cur->val;

    }
    
    void addAtHead(int val) {
        // 先把这个东西个实例化出来
        LinkedNode* head = new LinkedNode(val);
        head->next = _dummyHead->next;
        _dummyHead->next = head;
        _size++;
    }
    
    void addAtTail(int val) {
        // 先实例化一个出来咯
        LinkedNode* tail = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while (cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = tail;
        _size++;
    }
    

    // 这逻辑真的好烦好难。。。
    // 不对 全新得逻辑 负值会安排到前面得！！
    void addAtIndex(int index, int val) {
        // 先判断咯
        if (index < 0)
        {
            index = 0;
        }

        if (index > _size)
        {
            return;
        }

        LinkedNode* cur = _dummyHead;
        LinkedNode* now = new LinkedNode(val);
        while (index--)
        {
            cur = cur->next;
        }
        now->next = cur->next;
        cur->next = now;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if (index <= _size - 1 && index >= 0)
        {
            LinkedNode* cur = _dummyHead;
            while (index--)
            {
                // 移动指针 不做删除操作
                cur = cur->next;
            }

            //做删除操作

            LinkedNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
            _size--;
            
        }else{
            return;
        }
    }
private:
    int _size;
    LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

