dnl
dnl $ Id: $
dnl

PHP_ARG_WITH(couchdb, whether couchdb is available,[  --with-couchdb[=DIR] With couchdb support])


if test "$PHP_COUCHDB" != "no"; then


  export OLD_CPPFLAGS="$CPPFLAGS"
  export CPPFLAGS="$CPPFLAGS $INCLUDES -DHAVE_COUCHDB"
  export CPPFLAGS="$OLD_CPPFLAGS"

  PHP_ADD_INCLUDE($PHP_COUCHDB_DIR/include)
  export OLD_CPPFLAGS="$CPPFLAGS"
  export CPPFLAGS="$CPPFLAGS $INCLUDES -DHAVE_COUCHDB"

  AC_MSG_CHECKING(PHP version)
  AC_TRY_COMPILE([#include <php_version.h>], [
#if PHP_VERSION_ID < 50000
#error  this extension requires at least PHP version 5.0.0
#endif
],
[AC_MSG_RESULT(ok)],
[AC_MSG_ERROR([need at least PHP 5.0.0])])

  AC_CHECK_HEADER([pillowtalk_impl.h], [], AC_MSG_ERROR('pillowtalk_impl.h' header not found))
  export CPPFLAGS="$OLD_CPPFLAGS"
  PHP_SUBST(COUCHDB_SHARED_LIBADD)

  PHP_ADD_LIBRARY_WITH_PATH(pillowtalk, $PHP_COUCHDB_DIR/lib, COUCHDB_SHARED_LIBADD)


  PHP_SUBST(COUCHDB_SHARED_LIBADD)
  AC_DEFINE(HAVE_COUCHDB, 1, [ ])

  PHP_NEW_EXTENSION(couchdb, couchdb.c , $ext_shared)

fi

