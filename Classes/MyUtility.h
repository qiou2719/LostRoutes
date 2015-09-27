#ifndef  _MY_UTILITY_H_
#define  _MY_UTILITY_H_

#include "cocos2d.h"

USING_NS_CC;

using namespace std;

class MyUtility
{
public:
	//获取当前系统时间
	static string getCurrentTime();

	//WIN32和WP 8下将GBK字符转为UTF-8编码
	static string gbk_2_utf8(const string text);

	//从utf8_char.plist中读取游戏中用到的中文
	static string getUTF8Char(const string key);
};
#endif