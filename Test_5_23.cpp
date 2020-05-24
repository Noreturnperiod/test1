#include<iostream>  //输入输出流 in out stream
#include<algorithm>
#include "Test_5_23.h"
using namespace std;  //命名空间

void main() {
    int a = 10;
    int *p = &a;
}

/*
//函数的重载 1.名字相同  2.参数列表不同
int Max(int a, int b) {
    return a > b ? a : b;
}

char Max(char a, char b) {
    return a > b ? a : b;
}

double Max(double a, double b) {
    return a > b ? a : b;
}

void main() {
    cout << Max(10, 20) << endl;
    cout << Max('A', 'B') << endl;  //隐式转换
    cout << Max(10.12, 20.23) << endl;
}
/*int Add(int a, int b,int c) { //缺省参数(备胎)
    return a + b;
}

void main() {
    printf("result = %d\n", Add(10,20));
}

/*int Add(int a = 0, int b) { //缺省参数(备胎)
    return a + b;
}

void main() {
    printf("result = %d\n", Add(10));
}


/*int Add(int a = 0, int b = 0) { //缺省参数(备胎)
    return a + b;
}

void main() {
    printf("result = %d\n",Add());
}

/*
//名字冲突
namespace bit {
    const int min(const int a, const int b) {
        return a > b ? b : a;
    }
};
void main() {
    int a = 10;
    int b = 20;
    cout << "Min Value = " << bit::min(a,b) << endl;
}

/*namespace MySpace {
    void fun() {
        cout << "This is fun 1." << endl;
    }
};
namespace YouSpace {
    void fun() {
        cout << "This is fun 2." << endl;
    }
};
using YouSpace::fun; // 只包含此函数
//using namespace YouSpace // 包含文件的所有信息
void main() {
    //MySpace::fun();   //程序的二义性
    fun();
}
/*
//条件编译
#define A

#ifdef A
void fun() {
    cout << "This is fun 1." << endl;
}
#else
void fun() {
    cout << "This is fun 2." << endl;
}
#endif
void main() {
    fun();   //程序的二义性
}

/*void main()
{
    int key;
    std::cout << "请输入key：" << std::endl;  //插入符  输出运算符  :: 作用域访问符
    std::cin >> key;                     //提取符  输入运算符

    std::cout << "key =" << key << std::endl;
}

/*void main()
{
    int a = 10;
    char b = 'B';
    double c = 12.34;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int Add(int a, int b, int c)
{
    return 0;
}
*/