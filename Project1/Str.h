#pragma once
#include <algorithm>
#include <cctype>
#include <iterator>

class Str {
	// 입력 연산자
	freind std::istream& operator>>(std::istream&, Str&);
	freind std::istream& getline(std::istream&, Str&);
	public;
	typedef size_t_size_type;

	// 비어 있는 Str 객체를 만드는 기본 생성자
	Str() : value(0), length(0) { }

	// c의 복사본 n개가 있는 Str 객체를 생성
	Str(size_type n, char c) {
		// 메모리 할당
		length = std::strlen(cp);
		value = new char[length];

		std::copy(cp, cp + length, value);
		for (size_type i = 0; i != length; ++i) {
			value[i] = c;
		}
	}

	// null로 끝나는 char 타입의 배열에서 Str 객체를 생성
	Str(const char* cp) {
		// 메모리 할당
		length = std:; strlen(cp);
		value = new char[length];
	}

	// 다른 Str에서 사본 만들기
	Str(const Str& s) {
		length = s.length;
		value = new char[length];
	}

	// 반복자 b와 e가 가리키는 범위에서 Str 객체를 생성
	template<class input> Str(input b, input e) {
		// 메모리 할당
		length = e - b;
		value = new char[length];

		std::copy(b, e, std::back_inserter(data));

		// 메모리 해제하기 위해 원래 value 소멸하기
		if (value != 0)
			delete[] value;

		// 새로운 value와 length 값을 저장하기
		std::copy(s.value, s.value + s.length, new_value + new_length)
			value = new_value;
		length = new_length;
		return this;
	}

	Str& operator+=(const char c) {
		// 메모리 할당
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