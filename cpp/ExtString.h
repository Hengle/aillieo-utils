#include <string>
#include <vector>

#pragma once

#define MaxStringLen 1024

using std::string;
using std::wstring;
using std::vector;

namespace ExtString 
{
	// ��ת�ַ���
	void reverseString(string& str);
	void reverseString(wstring& str);

	// ��ת�ַ���
	string getReversedString(const string& str);
	wstring getReversedString(const wstring& str);

	// ��ת�ַ���
	char* reverseCString(char* cstr);

	// ��ʽ�������ַ���
	string format (const char * format, ...);
	
	// �����ַ���
	vector<string> splitString( const string& str , const string& sep );

	// �޼��ַ���
	string trim(const string& str, bool trimLeft=true, bool trimRight=true);

	// string �� wstring��ת
	//wstring string2wstring(const string& str);
	//string wstring2string(const wstring& str);

	// ��ȡ�ļ� ÿ��һ��string
	vector<string> file2vector(const char* filepath);

	string formatDeltaTimestamp(long deltaTime , const char* separator = ":");


}
