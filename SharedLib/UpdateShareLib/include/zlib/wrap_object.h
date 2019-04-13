
#ifndef __WRAP_OBJECT
#define __WRAP_OBJECT

#include <stdlib.h>
#include <Windows.h>

template<HLOCAL (WINAPI* WrapLocalAllocFunc)(void*)>
class WrapLocalAlloc
{
public:
	WrapLocalAlloc(void* data):data_(data){}
	~WrapLocalAlloc()
	{
		if(data_)
		{
			WrapLocalAllocFunc(data_);
			data_ = NULL;
		}
	}
private:
	void* data_;
};

template<BOOL (WINAPI* WrapHandleFunc)(void*)>
class WrapHandle
{
public:
	WrapHandle(void* data):data_(data){}
	~WrapHandle()
	{
		if(data_)
		{
			WrapHandleFunc(data_);
			data_ = NULL;
		}
	}
private:
	void* data_;
};

class WrapMalloc
{
public:
	WrapMalloc(void* data):data_(data){}

	~WrapMalloc()
	{ 
		free(data_);
		data_ = NULL;
	}
	void Reset()
	{
		free(data_);
		data_ = NULL;
	}
private:
	void* data_;
};

#endif