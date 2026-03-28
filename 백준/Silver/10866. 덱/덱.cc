/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int a;
    cin >> a;
    deque<int> dq;
    for(int i = 0; i < a; i++) {
        string s;
        cin >> s;
        if(s == "push_front") {
            int b;
            cin >> b;
            dq.push_front(b);
        }
        else if(s == "push_back") {
            int b;
            cin >> b;
            dq.push_back(b);
        }
        else if(s == "pop_front") {
            if(!dq.empty()) {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if(s == "pop_back") {
            if(!dq.empty()) {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if(s == "size") {
            cout << dq.size() << "\n";
        }
        else if(s == "empty") {
            if(!dq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else if(s == "front") {
            if(!dq.empty()) {
                cout << dq.front() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if(s == "back") {
            if(!dq.empty()) {
                cout << dq.back() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}