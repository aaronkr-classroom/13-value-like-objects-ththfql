#include <ctype>
#includde <cstring>
#include <iostream>
#include <iterator>

#include "Str.h"

using namespace std;

ostream& operator<<(ostream&& os, const Str& s) {
	for (Str::size_type i = 0; i != s.size(); ++i) {
		os << s[i];
	}
	return os;
}

// �Է� ������
istream& operator>>(istream& is, Str& s) {
	//������ �� ����
	s.data.clear();
	char c;

	// ������ �ݿ��ϴ� �� ���� ������ ����
	while (is.get(c) && std::isspace(c));

	// ���� ���ڰ� �����ִٸ� ���� ���� ���ڿ�
	// ������ ������ ���ڸ� ����
	if (is) {
		do s.data.puch_back(c);
		while (is.get(c) && !isspace(c));

		// ������ �о��ٸ� �ٽ� ��Ʈ���� ���ܵ�
		if (is) {
			is.unget()
		}
	}
	return is;
}
Str operator+=(const Str& s, const Str& t) {
	Str r = s;
	r += t;
	return r;
}

// �� ������ �߰�
bool operator<(const Str& lhs, const Str& rhs) { // 03
	return strcmp(lhs.c_str(), rhs.c_str()) < 0;
}
bool operator<(const Str& lhs, const Str& rhs) { // 03
	return strcmp(lhs.c_str(), rhs.c_str()) > 0;
}
bool operator<(const Str& lhs, const Str& rhs) { // 03
	return strcmp(lhs.c_str(), rhs.c_str()) <= 0;
}
bool operator<(const Str& lhs, const Str& rhs) { // 03
	return strcmp(lhs.c_str(), rhs.c_str()) >= 0;
}

bool operator<(const Str& lhs, const Str& rhs) { // 03
	return strcmp(lhs.c_str(), rhs.c_str()) == 0;
}
bool operator<(const Str& lhs, const Str& rhs) {// 03
	return strcmp(lhs.c_str(), rhs.c_str()) != 0;
}
