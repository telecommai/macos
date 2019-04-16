#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QRENCODESHARELIB_LIB)
#  define QRENCODESHARELIB_EXPORT Q_DECL_EXPORT
# else
#  define QRENCODESHARELIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QRENCODESHARELIB_EXPORT
#endif
