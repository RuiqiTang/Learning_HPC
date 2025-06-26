// chartype.cpp -- the char type
#include <iostream>
// output:
// [Case 1]
// Enter a character: 
// q
// Halo! Thank you for the q character.
// [Case 2]
// Enter a character: 
// 77
// Halo! Thank you for the 7 character.
int main(){
    using namespace std;
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    cout<<"Halo! ";
    cout<<"Thank you for the "<<ch<<" character."<<endl;
    return 0;
}