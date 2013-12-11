//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2013.12.11
// Code:	Caiyiheng
// Desc:	Public Content
//---------------------------------------------------------------------------

#ifndef ENGINE_PUBLIC_H_
#define ENGINE_PUBLIC_H_

// ��ֹʹ�ÿ������캯���� operator= ��ֵ�����ĺ�
// Ӧ����� private: ��ʹ��
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
	TypeName(const TypeName&); \
	void operator=(const TypeName&)

#endif		// ENGINE_PUBLIC_H_
