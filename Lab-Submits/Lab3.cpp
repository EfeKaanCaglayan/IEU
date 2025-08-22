#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
}};
    class Queue{

    Node* rear;
    Node* front;
    int count;
      public:
     Queue(){
        front=rear=nullptr;
        count=0;
     }
    
       void enqueue(int value){
        Node* newNode=new Node(value);
        if(rear==nullptr){
            front=rear=newNode;
        }
        else{
            rear->next = newNode;  
            rear = newNode; }
            count++;
     }
     bool isEmpty(){
        return count==0;
     }
   
      void top(){
        if (front != nullptr) {
            cout << front->data << endl;
        } else {
            cout << "Queue is empty" << endl;
        }
    }
    int size() {
        return count;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"queue is  empty"<<endl;
            return;
        }
    
            Node* temp=front;
            front=front->next;
            if (front == nullptr)
            rear = nullptr;
            delete temp;
        

    }

    };

int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(3);
    q.top();
    q.dequeue();
    q.top();
    q.isEmpty();
    return 0;
}
