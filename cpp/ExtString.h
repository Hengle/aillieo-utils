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
	wstring string2wstring(const string& str);
	string wstring2string(const wstring& str);

	// wstring �� utf8string��ת
	std::string wstring2utf8string( const wstring& str );
	std::wstring utf8string2wstring( const string& str );

	// ��ȡ�ļ� ÿ��һ��string
	vector<string> file2vector(const char* filepath);

	// ������ת��Ϊ D hh:mm:ss ��ʽ
	string formatDeltaTimestamp(long deltaTime , const char* separator = ":");

	// ��ȡutf8��ʽ�ַ�������
	size_t getUtf8stringLength(const string& str);

	// ʱ���תΪʱ�������
	string timeStampToLocalDate(time_t &t);
	string timeStampToLocalTime(time_t &t);
	string timeStampToUTCData(time_t &t);
	string timeStampToUTCTime(time_t &t);
}
