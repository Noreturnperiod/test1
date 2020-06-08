#include<iostream>
#include<string>
#include<assert.h>
using namespace std;

void main() {
	string str("abc");  //独立
	string str1 = str;
	cout << "str = " << str << endl;
	cout << "str1 = " << str1 << endl;
}

/*namespace bit {
	//浅拷贝
	class string
	{
		friend ostream& operator<<(ostream& out, const string& s);
	public:
		string(const char* str = "") :m_use_count(new int(1))
		{
			if (nullptr == str)
				m_data = new char[1]{ '\0' };
			else
			{
				m_data = new char[strlen(str) + 1];
				strcpy(m_data, str);
			}
		}
		string(const string& s) :m_data(s.m_data), m_use_count(s.m_use_count)
		{
			//增加引用计数
			increment_ref_count();
		}
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				decrement_ref_count();
				m_data = s.m_data;
				m_use_count = s.m_use_count;
				increment_ref_count();
			}
			return *this;
		}
		~string()
		{
			decrement_ref_count();
		}
	public:
		void increment_ref_count()
		{
			(*m_use_count)++;
		}
		void decrement_ref_count()
		{
			if(--(*m_use_count) == 0)
			{
				//释放数据空间
				delete []m_data;
				m_data = nullptr;
				//释放引用计数空间
				delete m_use_count;
				m_use_count = nullptr;
			}
		}
	public:
		//写时拷贝
		void to_upper()
		{
			char *new_data = new char[strlen(m_data)+1];
			strcpy(new_data, m_data);
			int *new_use_count = new int(1);
			char *pstr = new_data;
			while(*pstr != '\0')
			{
				*pstr -= 32;
				pstr++;
			}
			decrement_ref_count();
			
			m_data = new_data;
			m_use_count = new_use_count;
		}
	private:
		char* m_data;
		//引用计数
		int* m_use_count;
	};
	ostream& operator<<(ostream& out, const string& s)
	{
		out << s.m_data;
		return out;
	}
}

void main() {
	bit::string str("abc");  //独立
	bit::string str1 = str;
	cout << "str = " << str << endl;
	cout << "str1 = " << str1 << endl;

	str.to_upper();

	cout << "str = " << str << endl;
	cout << "str1 = " << str1 << endl;
}

/*void main() {
	bit::string str("abc");
	bit::string str1 = str;
	cout << "str = " << str << endl;
	cout << "str1 = " << str1 << endl;

	bit::string str2("xyz");
	//str2 = str1;
	//cout << "str2 = " << str2 << endl;

	bit::string str3(str2);
	str3 = str1;
}

/*namespace bit {
	class string {
	public:
		string(const char* str = " ") {
			if (nullptr == str)
				_str = new char[1]{ '\0' };
			else {
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}
		string(const string& s) {
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		string& operator=(const string& s) {
			if (this != &s) {
				string tmp_str(s);     //临时对象
				swap(_str, tmp_str._str);
			}
			return *this;
		}
		~string() {
			if (_str) {
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
}

void main()
{
	bit::string str1("abc");
	bit::string str2("xyz");
	str2 = str1;
}

/*namespace bit {
	class string {
	public:
		string(const char* str = " ") {
			if (nullptr == str)
				_str = new char[1]{ '\0' };
			else {
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}
		string(const string& s) {
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		string& operator=(const string& s) {
			if (this != &s) {
				char* tmp_str = new char[strlen(s._str) + 1];
				delete[]_str;
				_str = tmp_str;
				strcpy(_str, s._str);
			}
			return *this;
		}
		~string() {
			if (_str) {
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
}

void main()
{
	bit::string str1("abc");
	bit::string str2("xyz");
	str2 = str1;
}

/*namespace bit
{
	class string
	{
	public:
		string(const char* str = "")
		{
			if (nullptr == str)
				_str = new char[1]{ '\0' };
			else
			{
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}
		string(const string& s) : _str(nullptr)
		{
			string tmp_str(s._str);   //临时对象
			swap(_str, tmp_str._str);
		}
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				string tmp_str(s._str);
				swap(_str, tmp_str._str);
			}
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
};
void main()
{
	bit::string str1("abc");
	bit::string str2("xyz");
	str2 = str1;
}

/*namespace bit {
	class string {
	public:
		string(const char* str = " ") {
			if (nullptr == str)
				_str = new char[1]{ '\0' };
			else{
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}
		string(const string& s) {
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);
		}
		string& operator=(const string& s) {
			if (this != &s) {
				delete[]_str;
				_str = new char[strlen(s._str) + 1];
				strcpy(_str, s._str);
			}
			return *this;
		}
		~string() {
			if (_str) {
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
}

void main() {
	bit::string str(nullptr);
	bit::string str1("abc");
	bit::string str2;
	str2 = str1;
}
/*void main() {
	string str = "1233445";
	cout << atoi(str.c_str()) << endl;
}

/*void main() {
	const char* str = "-571951";
	int value = atoi(str);
	cout << "value = " << value << endl;
}*/