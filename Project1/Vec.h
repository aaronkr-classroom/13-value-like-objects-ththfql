#pragma once
class Str {
	// 입력 연산자
	friend std::istream& operator >>(std::istream&, Str&)
		// getline();
public:
	typedef Vec<char>::size_type size_type;

	// 비어 있는 Str 객체를 만드는 기본 생성자
	Str() { }

	// c의 복사본 n개가 있는 Str 객체를 생성
	Str(size_type n, char c) : data(n, c) { }

	//null로 끝나는 char 타입의 배열에서 Str 객체를 생성
	Str(const char* cp) {
		std::copy(cp, cp + std::strlen(cp),
			std::back_inserter(data));
