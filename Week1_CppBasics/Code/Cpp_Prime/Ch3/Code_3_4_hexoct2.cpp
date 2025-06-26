//hxexoct1.cpp -- shows hex and octal literals
#include <iostream>
// Output:
// Monsieur cuts a striking figure!
// chest = 42(42 in decimal)
// waist =2a(0x42 in hax)
// inseam = 52 (042 in octall)
int main(){
    using namespace std;
    int chest=42;
    int waist=42;
    int inseam=42;

    cout<<"Monsieur cuts a striking figure!\n";
    cout<<"chest = "<<chest<<"(42 in decimal)\n";
    cout<<hex;
    cout<<"waist ="<<waist<<"(0x42 in hax)\n";
    cout<<oct;
    cout<<"inseam = "<<inseam<<" (042 in octall)\n";
    return 0;
}