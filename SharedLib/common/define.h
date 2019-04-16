#ifndef DEFINE_H
#define DEFINE_H

#define HTTP_GETSOCKETADDRESS		"/IMServer/user/login"   //获取socket地址
#define HTTP_GETBUDDYLIST	"/IMServer/user/addresslist"  //获取好友列表
#define HTTP_GETGROUPID    "/IMServer/group/getGroupListByUserId"  //获取群组ID
#define HTTP_GetUserInfo   "/IMServer/user/getOtherUserByUserId?otherUserId=" //请求用户信息
#define HTTP_GETGROUPUSER 	"/IMServer/group/getUserListByGroupId"  //获取群组成员
#define HTTP_GETBUDDYINFOBYID 	"/IMServer/user/getOtherUserByUserId?otherUserId="  //根据ID查找用户信息
#define HTTP_GETGROUPINFOBYGROUPID 	"/IMServer/group/getGroupByGroupId" //根据群组ID获取群组信息
#define HTTP_GETSCANQRCODE       "https://tc.telecomm.io/tcserver/oauth/code?client_id="  //扫码登陆请求code
#define HTTP_GETSCANQRSTATUS     "https://tc.telecomm.io/tcserver/oauth/authenticationCode?code="                             //根据code判断二维码是否被扫码

#endif // DEFINE_H