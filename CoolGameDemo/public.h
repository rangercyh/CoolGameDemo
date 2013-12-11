//---------------------------------------------------------------------------
// CoolGame Engine
// CreateDate: 2013.12.11
// Creater:    Caiyiheng
// Describe:   public file
//---------------------------------------------------------------------------


#ifndef ENGINE_PUBLIC_H_
#define ENGINE_PUBLIC_H_

// put into private: to avoid implicit call operater= and copy construct function
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&); \
  void operator=(const TypeName&)

#endif  // ENGINE_PUBLIC_H_
