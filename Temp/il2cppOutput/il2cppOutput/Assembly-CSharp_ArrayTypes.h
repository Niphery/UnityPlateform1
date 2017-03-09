#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CoinScript
struct CoinScript_t1544027498;
// ResetOnRespawn
struct ResetOnRespawn_t590155258;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_CoinScript1544027498.h"
#include "AssemblyU2DCSharp_ResetOnRespawn590155258.h"

#pragma once
// CoinScript[]
struct CoinScriptU5BU5D_t3669417391  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CoinScript_t1544027498 * m_Items[1];

public:
	inline CoinScript_t1544027498 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CoinScript_t1544027498 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CoinScript_t1544027498 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CoinScript_t1544027498 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CoinScript_t1544027498 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CoinScript_t1544027498 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ResetOnRespawn[]
struct ResetOnRespawnU5BU5D_t2558994655  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ResetOnRespawn_t590155258 * m_Items[1];

public:
	inline ResetOnRespawn_t590155258 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResetOnRespawn_t590155258 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResetOnRespawn_t590155258 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ResetOnRespawn_t590155258 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResetOnRespawn_t590155258 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResetOnRespawn_t590155258 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
