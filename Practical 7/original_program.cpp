#include <iostream>
using namespace std;
int main(){
    int i=0 ;
    int a[3];

    char op ;
    int arg ;

    cin >> op ;
    cin >> arg;

    while(i<3){
        if(op=='+') a[i] = i+arg;
        else{
        if (op=='*') a[i]=i*arg;
    // else do nothing
        }
        cout << a[i];
        cout << "|" ;
        // cout << "i: " << i << endl;
        i = i + 1 ;
    }
    return 0;
}