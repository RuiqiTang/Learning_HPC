// exceed.cpp: exceeding some integer limits
#include <iostream>
#define ZERO 0 
#include <climits>

// Output:
// Sam has32767dollars and sue has32767 dollars deposited.
// Add $1 to each account.
// NowSam has-32768 dollars and Sue has 32768 dollars deposited.
// Take $1 from each account.
// NowSam has 32767dollars and Sue has 32767 dollars deposited.
// Lucky Sue!
int main(){
    using namespace std;
    short sam=SHRT_MAX; // initialize a variable to max value
    unsigned short sue=sam;

    cout<<"Sam has"<<sam<<"dollars and sue has"<<sue;
    cout<<" dollars deposited."<<endl
        <<"Add $1 to each account."<<endl<<"Now";
    sam=sam+1;
    sue=sue+1;
    cout<<"Sam has"<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl;
    cout<<"Take $1 from each account."<<endl<<"Now";
    sam=sam-1;
    sue=sue-1;
    cout<<"Sam has "<<sam<<"dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl<<"Lucky Sue!"<<endl;
    return 0;

}