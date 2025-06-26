//typecast.cpp -- focing type changes
#include <iostream>
// auks=31
// bats=30
// coots=30
int main(){
    using namespace std;
    int auks, bats,coots;

    auks=19.99+11.99;

    bats=(int)19.99+(int)11.99;
    coots=int (19.99) + int (11.99);

    cout<<"auks="<<auks<<endl;
    cout<<"bats="<<bats<<endl;
    cout<<"coots="<<coots<<endl;
    return 0;
}