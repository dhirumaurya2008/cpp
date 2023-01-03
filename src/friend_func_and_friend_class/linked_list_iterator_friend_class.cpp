#include<iostream>
using namespace std;

class Node;
class List;

class Iterator {
Node *node;
List *list;
public:
Iterator(): node(0), list(0) {
    
}
void begin(List*);
    bool end();
    void next();
    int data();
};

class List {
  Node *head;
  Node *tail;
  public:
  List(Node *h = 0) : head(h), tail(h) {

  }

  void display();
  void append(Node *p);
  friend class Iterator;
};

class Node {
int info;
Node *next;
public:
Node(int val) : info(val), next(0) {

}

#if 0
  friend void List::display();
  friend void List::append(Node *p);
  #else 
  friend class List;
  friend class Iterator;
  #endif 

};

#if 0
void List::display() {
    Node *ptr = head;
    while (ptr) {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
}
#endif

void List::append(Node *p) {
    if (!head) {
        head = tail = p;
    }
    else {
        tail->next = p;
        tail = tail->next;
    }
}

//Iterator functions 
    void Iterator::begin(List* l) {
        list = l; node = l->head;
    }
    bool Iterator::end() {
        return (node == 0);
    }
    void Iterator::next() {
        node = node->next;
    }
    int Iterator::data() {
        return node->info;
    }

int main () {
    List l;
    Node n1(1), n2(2), n3(3);
    l.append(&n1);
    l.append(&n2);
    l.append(&n3);
    //l.display();
    Iterator itr;
    for (itr.begin(&l); !(itr.end()); itr.next()) {
        cout << itr.data() << " ";
    }
    return 0;
}

/*Summary:- 
If there are many member functions of a class need to be friend of another class then it is better
to make class as friend.
*/