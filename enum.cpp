#include <iostream>
using namespace std;
enum YourCards{
Ace,
jack=44,
queen,
king
};
int main()
{
int Integer = 0; //No wrong with this decl
cout<< Ace<<queen<<endl;//this is the enum default assignments qs
unsigned int unsignedint =0;
int signedint =0;
cout << sizeof(unsignedint) << sizeof(signedint);
cout<< "both prints 4 bytes but holds different range of values";

cout << "Enter the radius to find the circumference\n";
int r;
cin >>r;
cout<<"ans = "<< 2*(22/7)*r;
auto int i = 2.0;

return 0;
}
