//
//  zip_util.h
//  AndroidAssist
//
//  Created by apple on 3/23/15.
//  Copyright (c) 2015 qixingshi. All rights reserved.
//

#ifndef AndroidAssist_zip_util_h
#define AndroidAssist_zip_util_h

#include <string>
#include "unzip.h"
class ZipUtil
{
public:
	static bool UnzipFile(std::wstring zip_file,std::wstring unzip_dir);
	static unzFile UnzOpen64(const wchar_t* path); 
};


#endif
