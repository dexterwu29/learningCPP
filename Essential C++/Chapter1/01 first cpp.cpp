#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your first name:";
    cin >> user_name;
    cout << "Welcome,"
        << user_name
        << "... this is our first meeting! \n";
    /*
    打印结果:
    Welcome,klay... this is our first meeting!
    */
        
    return 0;  // 默认程序无异常返回0，否则返回其他数字
}