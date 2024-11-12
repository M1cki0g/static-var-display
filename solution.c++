// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void display(){
    static int c = 0;
    cout<<++c<<endl;
}

int main() {
    // Write C++ code here
    display();
    display();
    display();

    return 0;
}
