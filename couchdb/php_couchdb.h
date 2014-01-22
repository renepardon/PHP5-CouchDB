/*
   +----------------------------------------------------------------------+
   | This library is free software; you can redistribute it and/or        |
   | modify it under the terms of the GNU Lesser General Public           |
   | License as published by the Free Software Foundation; either         |
   | version 2.1 of the License, or (at your option) any later version.   | 
   |                                                                      |
   | This library is distributed in the hope that it will be useful,      |
   | but WITHOUT ANY WARRANTY; without even the implied warranty of       |
   | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU    |
   | Lesser General Public License for more details.                      | 
   |                                                                      |
   | You should have received a copy of the GNU Lesser General Public     |
   | License in the file LICENSE along with this library;                 |
   | if not, write to the                                                 | 
   |                                                                      |
   |   Free Software Foundation, Inc.,                                    |
   |   51 Franklin Street, Fifth Floor,                                   |
   |   Boston, MA  02110-1301  USA                                        |
   +----------------------------------------------------------------------+
   | Authors: Christoph, René Pardon <christoph@renepardon.de>           |
   +----------------------------------------------------------------------+
*/

/* $ Id: $ */ 

#ifndef PHP_COUCHDB_H
#define PHP_COUCHDB_H

#include <pillowtalk_impl.h>
#ifdef  __cplusplus
extern "C" {
#endif

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#ifdef HAVE_COUCHDB
#define PHP_COUCHDB_VERSION "0.1.0"


#include <php_ini.h>
#include <SAPI.h>
#include <ext/standard/info.h>
#include <Zend/zend_extensions.h>
#ifdef  __cplusplus
} // extern "C" 
#endif
#ifdef  __cplusplus
extern "C" {
#endif

extern zend_module_entry couchdb_module_entry;
#define phpext_couchdb_ptr &couchdb_module_entry

#ifdef PHP_WIN32
#define PHP_COUCHDB_API __declspec(dllexport)
#else
#define PHP_COUCHDB_API
#endif

PHP_MINIT_FUNCTION(couchdb);
PHP_MSHUTDOWN_FUNCTION(couchdb);
PHP_RINIT_FUNCTION(couchdb);
PHP_RSHUTDOWN_FUNCTION(couchdb);
PHP_MINFO_FUNCTION(couchdb);

#ifdef ZTS
#include "TSRM.h"
#endif

#define FREE_RESOURCE(resource) zend_list_delete(Z_LVAL_P(resource))

#define PROP_GET_LONG(name)    Z_LVAL_P(zend_read_property(_this_ce, _this_zval, #name, strlen(#name), 1 TSRMLS_CC))
#define PROP_SET_LONG(name, l) zend_update_property_long(_this_ce, _this_zval, #name, strlen(#name), l TSRMLS_CC)

#define PROP_GET_DOUBLE(name)    Z_DVAL_P(zend_read_property(_this_ce, _this_zval, #name, strlen(#name), 1 TSRMLS_CC))
#define PROP_SET_DOUBLE(name, d) zend_update_property_double(_this_ce, _this_zval, #name, strlen(#name), d TSRMLS_CC)

#define PROP_GET_STRING(name)    Z_STRVAL_P(zend_read_property(_this_ce, _this_zval, #name, strlen(#name), 1 TSRMLS_CC))
#define PROP_GET_STRLEN(name)    Z_STRLEN_P(zend_read_property(_this_ce, _this_zval, #name, strlen(#name), 1 TSRMLS_CC))
#define PROP_SET_STRING(name, s) zend_update_property_string(_this_ce, _this_zval, #name, strlen(#name), s TSRMLS_CC)
#define PROP_SET_STRINGL(name, s, l) zend_update_property_stringl(_this_ce, _this_zval, #name, strlen(#name), s, l TSRMLS_CC)

ZEND_BEGIN_MODULE_GLOBALS(couchdb)
  int couchdb_sample_int;
  zend_bool debug;

ZEND_END_MODULE_GLOBALS(couchdb)

#ifdef ZTS
#define COUCHDB_G(v) TSRMG(couchdb_globals_id, zend_couchdb_globals *, v)
#else
#define COUCHDB_G(v) (couchdb_globals.v)
#endif


PHP_METHOD(CouchDB, getDatabases);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__getDatabases_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__getDatabases_args NULL
#endif

PHP_METHOD(CouchDB, createDocument);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__createDocument_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 1)
  ZEND_ARG_INFO(0, json)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__createDocument_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_revision);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_revision_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_revision_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_bare_info);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_bare_info_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_bare_info_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_update);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_update_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_update_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_delete);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_delete_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_delete_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_copy);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_copy_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_copy_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_get_attachment);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_get_attachment_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_get_attachment_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_add_attachment);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_add_attachment_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_add_attachment_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_delete_attachment);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_delete_attachment_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_delete_attachment_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_info);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_info_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_info_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_create);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_create_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_create_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_delete);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_delete_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_delete_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_documents);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_documents_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_documents_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_documents_rows);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_documents_rows_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_documents_rows_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_bulk_add_documents);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_bulk_add_documents_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_bulk_add_documents_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_changes);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_changes_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_changes_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_compact);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_compact_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_compact_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_compact_design_doc);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_compact_design_doc_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_compact_design_doc_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_ensure_full_commit);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_ensure_full_commit_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_ensure_full_commit_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_missing_revs);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_missing_revs_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_missing_revs_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_purge_historical_documents);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_purge_historical_documents_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_purge_historical_documents_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_view_execute);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_view_execute_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_view_execute_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_db_view_cleanup);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_db_view_cleanup_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_db_view_cleanup_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_find_by_id);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_find_by_id_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_find_by_id_args NULL
#endif

PHP_METHOD(CouchDB, couchdb_document_find_by_revision);
#if (PHP_MAJOR_VERSION >= 5)
ZEND_BEGIN_ARG_INFO_EX(CouchDB__couchdb_document_find_by_revision_args, ZEND_SEND_BY_VAL, ZEND_RETURN_VALUE, 0)
ZEND_END_ARG_INFO()
#else /* PHP 4.x */
#define CouchDB__couchdb_document_find_by_revision_args NULL
#endif

#ifdef  __cplusplus
} // extern "C" 
#endif

#endif /* PHP_HAVE_COUCHDB */

#endif /* PHP_COUCHDB_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
