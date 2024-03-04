#include <iostream>
#include <list> 


template <typename T>
class List {
public:
    virtual void push(const T& val) = 0;
    virtual T pop() = 0;
    virtual bool empty() const = 0;
    virtual ~List() {}
};


template <typename T>
class Stack : public List<T> {
private:
    std::list<T> data; 
public:
    void push(const T& val) override {
        data.push_back(val);
    }
    T pop() override {
        T val = data.back();
        data.pop_back();
        return val;
    }
    bool empty() const override {
        return data.empty();
    }
};


template <typename T>
class Queue : public List<T> {
private:
    std::list<T> data; 
public:
    void push(const T& val) override {
        data.push_back(val);
    }
    T pop() override {
        T val = data.front();
        data.pop_front();
        return val;
    }
    bool empty() const override {
        return data.empty();
    }
};

int main() {
    Stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    std::cout << "Popped from stack: " << myStack.pop() << std::endl;

    Queue<std::string> myQueue;
    myQueue.push("Hello");
    myQueue.push("World");
    std::cout << "Dequeued from queue: " << myQueue.pop() << std::endl;

    return 0;
}
