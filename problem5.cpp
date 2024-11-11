#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string upper="",lower="";
    for(auto x:s)
        if(isupper(x))
            upper+=x;
        else
            lower+=x;
    cout<<upper.length()<<" ";
    for(auto x:upper)
        cout<<x<<" ";
    cout<<endl<<lower.length()<<" ";
    for(auto x:lower)
        cout<<x<<" ";
    

    return 0;
}
