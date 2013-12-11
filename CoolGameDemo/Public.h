//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2013.12.11
// Code:	Caiyiheng
// Desc:	Public Content
//---------------------------------------------------------------------------

#ifndef ENGINE_PUBLIC_H_
#define ENGINE_PUBLIC_H_

// 禁止使用拷贝构造函数和 operator= 赋值操作的宏
// 应该类的 private: 中使用
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
	TypeName(const TypeName&); \
	void operator=(const TypeName&)

#endif		// ENGINE_PUBLIC_H_
