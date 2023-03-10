#include <vector>

class stack {
public:
    void push(int a){
        v.push_back(a);
    }
    int peek(){
        return v.back();
    }
    int pop(){
        int s = v.back();
        v.pop_back();
        return s;
    }

private:
    std::vector<int> v;

};

int mul(double a, double b) {


    stack s;
    s.push(a);
    s.push(b);

    return s.pop()*s.pop();
}