
#include <iostream>
#include "Header.h"

using namespace std;
extern int x;
void p() {
    static int n = 1;
    n++;
    cout << n << endl;
}
void y() { static int n = 1; cout << n << endl; }
int main()
{
    extern int m;
    p();
    p();
    p();
    y();
    int d = 10; cout << m;
  
}
int m = 4444444;
