#ifndef OUR_LIST_GLOBAL_H
#define OUR_LIST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OUR_LIST_LIBRARY)
#  define OUR_LISTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define OUR_LISTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OUR_LIST_GLOBAL_H
