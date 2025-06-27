#include <iostream>
#include <memory>
using namespace std;

class Tensor{
    public:
        Tensor() {cout<<"Tensor created\n";}    // 构造函数 Constructor：初始化
        ~Tensor() {cout<<"Tensor destroyed\n";} // 析构函数 Destructor： 在对象生命周期结束时自动调用，资源释放、清理
};

void runInference(){
    unique_ptr<Tensor> t=make_unique<Tensor>(); //t 自动释放，不需要被delete
}

int main(){
    runInference();
    return 0;
}