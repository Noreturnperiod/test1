#include<iostream>  //��������� in out stream
#include<algorithm>
#include "Test_5_23.h"
using namespace std;  //�����ռ�

void main() {
    int a = 10;
    int *p = &a;
}

/*
//���������� 1.������ͬ  2.�����б�ͬ
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
    cout << Max('A', 'B') << endl;  //��ʽת��
    cout << Max(10.12, 20.23) << endl;
}
/*int Add(int a, int b,int c) { //ȱʡ����(��̥)
    return a + b;
}

void main() {
    printf("result = %d\n", Add(10,20));
}

/*int Add(int a = 0, int b) { //ȱʡ����(��̥)
    return a + b;
}

void main() {
    printf("result = %d\n", Add(10));
}


/*int Add(int a = 0, int b = 0) { //ȱʡ����(��̥)
    return a + b;
}

void main() {
    printf("result = %d\n",Add());
}

/*
//���ֳ�ͻ
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
using YouSpace::fun; // ֻ�����˺���
//using namespace YouSpace // �����ļ���������Ϣ
void main() {
    //MySpace::fun();   //����Ķ�����
    fun();
}
/*
//��������
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
    fun();   //����Ķ�����
}

/*void main()
{
    int key;
    std::cout << "������key��" << std::endl;  //�����  ��������  :: ��������ʷ�
    std::cin >> key;                     //��ȡ��  ���������

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