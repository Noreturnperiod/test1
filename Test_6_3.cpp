#include<iostream>
#include<assert.h>
#include<list>  //容器
#include<stack>
#include<array>
#include<string>
using namespace std;

void main() {
	int ar[] = { 5,4,3,8,2,1,0,9 };
	sort(ar, ar + 8);

	list<int> mylist = { 5,4,3,8,2,1,0,9 };
	for (const auto& e : mylist)
		cout << e << "-->";
	cout << "Over" << endl;

	mylist.sort(greater<int>());
	for (const auto& e : mylist)
		cout << e << "-->";
	cout << "Over" << endl;
}

/*void main() {
	string str("Hello");
	cout << str << endl;
	cout <<"size = "<< str.size() << endl;
}

/*void main() {
	array<int,10> ar;
	stack<int> st;
	st.push(1);
	st.push(2);

	st.pop();
	cout << st.top() << endl;
}

/*void main() {
	list<int> mylist;
	for (int i = 0; i < 10; ++i) 
		mylist.push_back(i);
	for (const auto& e : mylist)
		cout << e << "-->";
	cout << "Over" << endl;
}

/*
//类  模板
template<typename Type>
class SeqList {
public:
	SeqList(int sz = SEQLIST_DEFAULT_SIZE) {
		capacity = sz > SEQLIST_DEFAULT_SIZE ? sz : SEQLIST_DEFAULT_SIZE;
		base = new Type[capacity];
		size = 0;
	}
	~SeqList() {
		delete[] base;
		base = nullptr;
		capacity = size = 0;
	}
public:
	void push_back(const Type& x);
	Type& operator[](int pos) {
		assert(pos >= 0 && pos < size);
		return base[pos];
	}
	void show_list()const {
		for (int i = 0; i < size; ++i) 
			cout << base[i] << " ";
		cout << endl;
	}
private:
	enum { SEQLIST_DEFAULT_SIZE = 8 };
	Type*base;
	int capacity;
	int size;
};

template<typename Type>
void SeqList<Type>::push_back(const Type& x) {
	if (size < capacity) {
		base[size++] = x;
	}
}

void main() {
	SeqList<char> list1;  //char
	SeqList<int> list2;  //int

	list1.push_back('a');
	list1.push_back('b');
	list1.push_back('c');
	list1.push_back('d');
	//list1.show_list();

	cout << list1[2] << endl;

	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	list2.push_back(4);
	//list2.show_list();
}
/*
//template<typename Type1, typename Type2>
//Type1 Max(Type1 a, Type2 b) {
//	//cout << typeid(Type).name() << endl;
//	return a > b ? a : b;
//}

//泛化
template<typename Type>
Type Max(Type a, Type b) {
	cout << typeid(Type).name() << endl;
	return a > b ? a : b;
}

//特化
template<>
int Max<int>(int a, int b) {
	return a > b ? a : b;
}

void main() {
	cout << Max('A', 'X') << endl;
	cout << Max(10, 20) << endl;
	cout << Max(21.24, 25.28) << endl;
}

/*class Student {
	friend ostream& operator<<(ostream& out, const Student& s);
public:
	Student(const char* name, int age) {
		strcpy(this->name, name);
		this->age = age;
	}
public:
	bool operator>(const Student& s) {
		return age > s.age;
	}
private:
	char name[10];
	int age;
};

ostream& operator<<(ostream& out, const Student& s) {
	out << s.name << ":" << s.age << endl;
	return out;
}

//函数模板  不支持分离编译
//template<class Type>
template<typename Type>
Type Max(Type a, Type b) {
	cout << typeid(Type).name() << endl;
	return a > b ? a : b;
}

//模板函数
char Max(char a, char b) {
	return a > b ? a : b;
}

void main() {
	cout << Max('A', 'X') << endl;
	cout << Max(10, 20) << endl;
	cout << Max(21.24, 25.28) << endl;
}

/*
//参数类型的推导 推演
void main() {
	cout << Max('A', 'X') << endl;
	cout << Max(10, 20) << endl;
	cout << Max(21.24, 25.28) << endl;

	cout << Max(Student("zjn", 20), Student("bjy", 250)) << endl;
}*/