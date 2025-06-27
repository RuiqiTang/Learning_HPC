// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    const int Size=15;
    char name1[Size];
    char name2[Size]="C++owboy";

    cout<<"Howdy! I'm "<<name2;
    cout<<"What's your name?\n";
    cin>>name1;
    cout<<strlen(name1)<<endl;
    cout<<sizeof(name1)<<endl;
    return 0;
}