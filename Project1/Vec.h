#pragma once
class Str {
	// �Է� ������
	friend std::istream& operator >>(std::istream&, Str&)
		// getline();
public:
	typedef Vec<char>::size_type size_type;

	// ��� �ִ� Str ��ü�� ����� �⺻ ������
	Str() { }

	// c�� ���纻 n���� �ִ� Str ��ü�� ����
	Str(size_type n, char c) : data(n, c) { }

	//null�� ������ char Ÿ���� �迭���� Str ��ü�� ����
	Str(const char* cp) {
		std::copy(cp, cp + std::strlen(cp),
			std::back_inserter(data));
