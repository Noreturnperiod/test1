#include<iostream>
using namespace std;



/*class CGoods {
public:
	void RegisterGoods(const char* name, size_t count, float price);
	float GetTotalPrice();
	char* GetName();
	size_t GetCount();
	float GetPrice();
private:
	char m_name[20];
	size_t m_count;
	float m_price;
	float m_total_price;
};
void CGoods::RegisterGoods(const char* name, size_t count, float price) {
	strcpy(m_name, name);
	m_count = count;
	m_price = price;
	m_total_price = m_price * m_count;
}
float CGoods::GetTotalPrice() {
	return m_total_price;
}
char* CGoods::GetName() {
	return m_name;
}
size_t CGoods::GetCount() {
	return m_count;
}
float CGoods::GetPrice() {
	return m_price;
}
void main() {
	CGoods c1, c2;
	c1.RegisterGoods("C++", 10, 56.9);
	c2.RegisterGoods("JAVA", 8, 45);
	cout << "name = " << c1.GetName() << endl;
	cout << "count = " << c1.GetCount() << endl;
	cout << "price = " << c1.GetPrice() << endl;
	cout << "total price = " << c1.GetTotalPrice() << endl;
	cout << endl;
	cout << "name = " << c2.GetName() << endl;
	cout << "count = " << c2.GetCount() << endl;
	cout << "price = " << c2.GetPrice() << endl;
	cout << "total price = " << c2.GetTotalPrice() << endl;
}

/*class CGoods {
public:
	void RegisterGoods(const char* name, size_t count, float price) {
		strcpy(m_name, name);
		m_count = count;
		m_price = price;
		m_total_price = m_price * m_count;
	}
	float GetTotalPrice() {
		return m_total_price;
	}
	char* GetName() {
		return m_name;
	}
	size_t GetCount() {
		return m_count;
	}
	float GetPrice() {
		return m_price;
	}
private:
	char m_name[20];
	size_t m_count;
	float m_price;
	float m_total_price;
};

void main() {
	CGoods c1, c2;
	c1.RegisterGoods("C++", 10, 56.9);
	c2.RegisterGoods("JAVA", 8, 45);
	cout << "name = " << c1.GetName() << endl;
	cout << "count = " << c1.GetCount() << endl;
	cout << "price = " << c1.GetPrice() << endl;
	cout << "total price = " << c1.GetTotalPrice() << endl;
	cout << endl;
	cout << "name = " << c2.GetName() << endl;
	cout << "count = " << c2.GetCount() << endl;
	cout << "price = " << c2.GetPrice() << endl;
	cout << "total price = " << c2.GetTotalPrice() << endl;
}
/*
//封装  -->  数据和方法
class Test {
public:
	int a;
protected:
	double b;
private:
	char c;
};

void main() {
	Test t;
	t.a = 10;
}
/*struct Test {
	int a;
	double b;
	char c;
};

class Test1 {
	int a;
	double b;
	char c;
};

void main() {
	Test t;  //定义变量 - 结构体变量
	t.a = 10;
	t.b = 'A';
	Test1 t1;  //实例化 - 对象
}
/*void f(int) {
	cout << "f(int)" << endl;
}

void f(int*) { 
	cout << "f(int*)" << endl;
}
void main() {
	f(1);
	f((int*)NULL);  //指针  宏
	f(nullptr);  //类型
}

/*void main() {
	int* p = NULL;
	int* q = 0;

	int* ptr = nullptr;
}

/*void main() {
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(ar) / sizeof(ar[0]);
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;

	for (const auto& e : ar)
		// continue
		//break
		cout << e << " ";
	cout << endl;
}

/*void main() {
	int a = 1;
	auto p = &a;
	cout << typeid(p).name() << endl;
	auto& b = a;
	cout << typeid(b).name() << endl;

	auto x = 1.23, y = 12.34;

	int ar[] = { 1,2,3,4 };
	cout << typeid(ar).name() << endl;
	auto br = ar;  //首元素地址
	cout << typeid(br).name() << endl;
}

/*void fun(auto a) {
	cout << "a = " << a << endl;
}

void main() {
	fun(10);
}

/*struct Test {
};
void main() {
	int a = 10;
	char ch = 'A';
	Test t;
	auto b = t;
	cout << typeid(t).name() << endl;
}

/*
//内联方法
inline int fun(const int& a, const int& b) {
	int result = a + b;
	return result;
}

void main() {
	int res = fun(10, 20);
	cout << "result = " << res << endl;
}

/*void main() {
	int&& a = 10;  //右值引用
}

/*int& fun(const int &a,const int &b) {
	int result = a + b;
	return result;
}

void main() {
	int& res = fun(10, 20);
	cout << "result = " << res << endl;
}
/*struct Student {
	char name[10];
	int age;
};

void main() {
	int a = 10;
	int& b = a;

	int* p = &a;
	int*& q = p;  //指针的引用

	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(& br)[10] = ar;  //数组引用

	Student s;
	Student& rs = s;
}

/*void main() {
	const int a = 10;
	const int& b = a; //语法要求
}

void main() {
	int a = 10;
	const int& b = a; //语义要求
}

/*void main() {
	int a = 10;
	const int& b = a;
	a = 100;
	b = 20;
}

/*void main() {
	int a = 10;
	int b = 20;

	int* const p = &a;
	*p = 100;
}

/*void Swap(int &x,int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void main() {
	int a = 10; 
	int b = 20;
	cout << "a = " << a << ", b = " << b << endl;
	Swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
}*/