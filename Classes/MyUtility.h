#ifndef  _MY_UTILITY_H_
#define  _MY_UTILITY_H_

#include "cocos2d.h"

USING_NS_CC;

using namespace std;

class MyUtility
{
public:
	//��ȡ��ǰϵͳʱ��
	static string getCurrentTime();

	//WIN32��WP 8�½�GBK�ַ�תΪUTF-8����
	static string gbk_2_utf8(const string text);

	//��utf8_char.plist�ж�ȡ��Ϸ���õ�������
	static string getUTF8Char(const string key);
};
#endif