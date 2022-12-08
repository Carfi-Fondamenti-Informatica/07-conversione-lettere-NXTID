#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char a=0;

    cin>>a;
    if(conversione (a)==true)
        cout<<a;
    else
        cout<<"errore";

    return 0;
}
