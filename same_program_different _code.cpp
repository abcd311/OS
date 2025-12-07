// same programe different code
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main(){
    pid_t pid = fork(); 
    if (pid < 0) {
        cout << "Error" << endl;
    } else if (pid == 0) {
        cout<< "Child process continue ......: " << endl << endl;
        cout << "Child process ID: " << getpid() << endl;
        cout << " child Parents ID: " << getppid() << endl;
        cout << "Child process ends " << endl;
    } else {
        cout<< "Parent process continue ......: " << endl << endl;
        cout << "Parent's process ID: " << getpid() << endl;
        cout << "parent's parent  ID: " << pid << endl;
        cout << "Parent process ends"  << endl;
    }
    return 0;
}

