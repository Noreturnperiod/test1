#include<iostream>
using namespace std;

/*class String {
public:
	String(const char* str = "") {
		if (str == nullptr) {
			m_data = new char[1];
			m_data[0] = '\0';
		}
		else {
			m_data = new char[strlen(str) + 1];
			strcpy(m_data, str);
		}
	}
	String(const String& s) {
		m_data = new char[strlen(s.m_data) + 1];
		strcpy(m_data, s.m_data);
	}
	String& operator=(const String& s) {
		if (this != &s) {
			delete []m_data;
			m_data = new char[strlen(s.m_data) + 1];
			strcpy(m_data, s.m_data);
		}
		return *this;
	}
	~String() {
		if (m_data == nullptr) {
			delete []m_data;
			m_data = nullptr;
		}
	}
private:
	char* m_data;
};

void main() {
	String s = "Hello";
	String s1(nullptr);
}*/