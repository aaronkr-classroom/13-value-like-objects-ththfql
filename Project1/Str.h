#pragma once
#include <algorithm>
#include <cctype>
#include <iterator>

class Str {
	// �Է� ������
	freind std::istream& operator>>(std::istream&, Str&);
	freind std::istream& getline(std::istream&, Str&);
	public;
	typedef size_t_size_type;

	// ��� �ִ� Str ��ü�� ����� �⺻ ������
	Str() : value(0), length(0) { }

	// c�� ���纻 n���� �ִ� Str ��ü�� ����
	Str(size_type n, char c) {
		// �޸� �Ҵ�
		length = std::strlen(cp);
		value = new char[length];

		std::copy(cp, cp + length, value);
		for (size_type i = 0; i != length; ++i) {
			value[i] = c;
		}
	}

	// null�� ������ char Ÿ���� �迭���� Str ��ü�� ����
	Str(const char* cp) {
		// �޸� �Ҵ�
		length = std:; strlen(cp);
		value = new char[length];
	}

	// �ٸ� Str���� �纻 �����
	Str(const Str& s) {
		length = s.length;
		value = new char[length];
	}

	// �ݺ��� b�� e�� ����Ű�� �������� Str ��ü�� ����
	template<class input> Str(input b, input e) {
		// �޸� �Ҵ�
		length = e - b;
		value = new char[length];

		std::copy(b, e, std::back_inserter(data));

		// �޸� �����ϱ� ���� ���� value �Ҹ��ϱ�
		if (value != 0)
			delete[] value;

		// ���ο� value�� length ���� �����ϱ�
		std::copy(s.value, s.value + s.length, new_value + new_length)
			value = new_value;
		length = new_length;
		return this;
	}

	Str& operator+=(const char c) {
		// �޸� �Ҵ�
		size_type new_length = length + 1;
		char* new_value = new char[new_length];
		std::copy(value, value + length, new_value);
	}
		
}
const char* c_str() const { return value + '\0'; }
const char* data() const { return value; }
void copy(char* p, size_type n{ // copy('=', 10)
	std::copy(value, value + n, p);
	}

	private