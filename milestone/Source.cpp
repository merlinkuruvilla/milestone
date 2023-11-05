#include <iostream>
#include <thread>
using namespace std;

void increment()
{
    for (int i = 0; i <= 20; i++) {
        cout << "Thread 1 incremeneted: "<<i<<"\n";
    }
}

void decement() {
    for (int i = 20; i >= 0; i--) {
        cout << "Thread 2 deceremented: "<<i<<"\n";
    }
}


int main()
{

    cout << "Starting thread 1"
        << endl;


    thread thread1(increment);
   

    cout << "Waiting for thread 1 to finish" << endl;
    thread1.join();
    cout << "Thread 1 finished";

    cout << "Starting thread 2"
        << endl;
    thread thread2(decement);

    cout << "Waiting for thread 2 to finish" << endl;
    thread2.join();
    cout << "Thread 2 finished";
    return 0;
}