/*
结合黑马程序员教程，初识数据类型及sizeof关键字的使用
下一讲：运算符，https://www.bilibili.com/video/BV1et411b73Z?p=16
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1.整型
    short num1 = 10;
    int num2 = 10;
    long int num3 = 10;
    long long num4 = 10;
    cout << "short的长度：" << sizeof(num1) << endl;
    cout << "int的长度：" << sizeof(num2) << endl;
    cout << "long int的长度：" << sizeof(num3) << endl;
    cout << "long long的长度：" << sizeof(num4) << endl;
    /*
    打印结果：
    short的长度：2
    int的长度：4
    long int的长度：4
    long long的长度：8
    */

    cout << "----------\n";
    // 2.实型
    float f1 = 3.1415926f;  // float后面的f不能少
    double d1 = 3.1415926;
    cout << f1 << endl;
    cout << d1 << endl;
    /*
    打印结果：（最多显示6位有效数字，可以通过修改精确度来改变这个情况）
    3.14159
    3.14159
    */

    cout << "----------\n";
    // 3.字符
    char ch = 'a'; // 注意：字符只能用''
    cout << "Please enter a new char:";
    cin >> ch;
    cout << "This one is "
         << ch
         << ", the Ascii code of which is "
         << int(ch)
         << ". \n";
    /*
    打印结果：
    This one is A, the Ascii code of which is 65.
    */

    cout << "----------\n";
    // 4.字符串
    string str1 = "aa";
    string str2 = "aaaaaa";
    cout << str1 << "\tworld" << endl;
    cout << str2 << "\tworld" << endl;
    /*
    打印结果：（\t水平制表符，会用空格补齐8个位置）
    aa      world
    aaaaaa  world
    */

    cout << "----------\n";
    // 5.布尔类型
    bool flag = true;
    cout << flag << endl;
    cout << "The size of flag is " << sizeof(flag) << endl;
    flag = false;
    cout << flag << endl;
    cout << "The size of flag is " << sizeof(flag) << endl;
    /*
    打印结果：
    1
    The size of flag is 1
    0
    The size of flag is 1
    */

    return 0;
}