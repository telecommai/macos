﻿#ifndef DEFINE_H
#define DEFINE_H

#define HTTP_GETSOCKETADDRESS		"/IMServer/user/login" 
#define HTTP_GETBUDDYLIST	"/IMServer/user/addresslist" 
#define HTTP_GETGROUPID    "/IMServer/group/getGroupListByUserId" 
#define HTTP_GetUserInfo   "/IMServer/user/getOtherUserByUserId?otherUserId="
#define HTTP_GETGROUPUSER 	"/IMServer/group/getUserListByGroupId"  
#define HTTP_GETBUDDYINFOBYID 	"/IMServer/user/getOtherUserByUserId?otherUserId="  
#define HTTP_GETGROUPINFOBYGROUPID 	"/IMServer/group/getGroupByGroupId"
#define HTTP_GETSCANQRCODE       "http://tc.solarsource.cn:9692/tcserver/oauth/code?client_id=" 
#define HTTP_GETSCANQRSTATUS     "http://tc.solarsource.cn:9692/tcserver/oauth/authenticationCode?code="                  

#endif // DEFINE_H