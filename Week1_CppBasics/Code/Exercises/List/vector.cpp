#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> weights={1,2,3,4,5};
    weights.push_back(9); //动态添加元素9

    for (int w:weights)
        cout<<w<<" ";
    cout<<endl;
    return 0;
}