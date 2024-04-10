#include <iostream>
using namespace std;

int arguement;

int recursive_function_plus(int args, int count){
    if(count == 3) return arguement - 1;
    if(count < 3){
        
        
        cout << "count: " << count << endl;
        cout << "args: " << arguement << endl;

        count++;
        int z = 1 + recursive_function_plus(arguement, count);
        cout << z << "|" ;

        return z;


    }

    

    

    
    

    return 0;
}

int recursive_function_multiplication(int args){
    int i = 0;
    if(i > 3) return 0;
    else{
        return args + recursive_function_multiplication(i * 1);
    }
    return 0;
}


int main(){

    int arg;

    int count = 0;
    char op;

    cout << "Enter the operation: + or * " << endl;
    cin >> op;

    cout << "Enter the arguement: " << endl;
    cin >> arg;

    arguement = arg;

    if(op == '+'){
        //cout << "goes here"<< endl;
        int result = recursive_function_plus(arg, count);
        //cout << result << endl;

    }else if (op =='*'){
        int res = recursive_function_multiplication(arg);
        cout << res;
        cout << "|";
    }
    return 0;
}

