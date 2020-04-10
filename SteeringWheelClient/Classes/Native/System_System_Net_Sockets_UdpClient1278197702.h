#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"

// System.Net.Sockets.Socket
struct Socket_t3821512045;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.UdpClient
struct  UdpClient_t1278197702  : public Il2CppObject
{
public:
	// System.Boolean System.Net.Sockets.UdpClient::disposed
	bool ___disposed_0;
	// System.Boolean System.Net.Sockets.UdpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::socket
	Socket_t3821512045 * ___socket_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::family
	int32_t ___family_3;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(UdpClient_t1278197702, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(UdpClient_t1278197702, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(UdpClient_t1278197702, ___socket_2)); }
	inline Socket_t3821512045 * get_socket_2() const { return ___socket_2; }
	inline Socket_t3821512045 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t3821512045 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier(&___socket_2, value);
	}

	inline static int32_t get_offset_of_family_3() { return static_cast<int32_t>(offsetof(UdpClient_t1278197702, ___family_3)); }
	inline int32_t get_family_3() const { return ___family_3; }
	inline int32_t* get_address_of_family_3() { return &___family_3; }
	inline void set_family_3(int32_t value)
	{
		___family_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
