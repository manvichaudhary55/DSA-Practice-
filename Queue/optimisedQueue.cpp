#include<iostream>
using namespace std;

struct queue {
    int front;
    int end;
    int *arr;
    int size;
    int currSize;

    queue(int capacity){
        front = -1;
        end = -1;
        arr = new int[capacity];
        size = capacity;
        currSize = 0;
    }

    void push(int elem){
        if(currSize == size){
            cout << "Overflow" << endl;
            return;
        }

        if(currSize == 0){
            front = end = -1;
        }
        else{
            end = (end+1)%size;
        }

        arr[end] = elem;
        currSize++;
    }

    void pop(){
        if(currSize == 0){
            cout << "Underflow Condition nothing to pop" << endl;
            return;
        }
        int elem = arr[front];

        if(currSize == 1){
            front = end = -1;
        }
        else{
            front = (front+1) % size;
        }
        currSize -= 1;
    }

    void top(){
        if(currSize == 0){
            cout << "Underflow condition" << endl;
            return;
        }
        
        cout << arr[front] << endl;

    }

    void QSize(){
        cout << "Size is :" << currSize << endl;
    }
};



int main(){

    queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.QSize();
    return 0;
}