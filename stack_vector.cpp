#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> stack;  
    string cmd;
    cin >> cmd;
    while(cmd != "exit"){
        if(cmd == "pop"){
            if(stack.size() > 0)
                stack.pop_back();
            else
                cout << "The stack is empty. Can't pop!" << endl;
        }
        else{
            int num = 0;
            cin >> num;
            stack.push_back(num);
        }

        for(unsigned int i = 0; i < stack.size(); i++){
            cout << stack[i] << " ";
        }
        cout << endl;

        cin >> cmd;
    }

    return 0;
}
