#include <string>
#include <vector>
#include <sstream>

#pragma once

#define MaxStringLen 1024

using std::string;
using std::wstring;
using std::vector;
using std::ostringstream;
using namespace std;

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

	// ��ʽ��������
	string formatQuantityShorten(long& val);
	string formatQuantityComma(long& val);
	
	
	// ͨ��tostring
	template<class T>
	string toString(T t)
	{
		ostringstream os;
		os<<t;
		return os.str();
	}
	template<class T>
	string vecToString(const vector<T>& vec)
	{
		ostringstream os;
		for (int i=0; i<int(vec.size())-1; i++) os<<vec[i]<<",";
		if (vec.size()>0) os << *vec.rbegin();
		return os.str();
	}
	
}

