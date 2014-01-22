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

#include "php_couchdb.h"

#if HAVE_COUCHDB

/* {{{ Class definitions */

/* {{{ Class CouchDB */

static zend_class_entry * CouchDB_ce_ptr = NULL;

/* {{{ Methods */


/* {{{ proto array getDatabases()
  This method returns all available databases. */
PHP_METHOD(CouchDB, getDatabases)
{
	zend_class_entry * _this_ce;

	zval * _this_zval = NULL;



	if (zend_parse_method_parameters(ZEND_NUM_ARGS() TSRMLS_CC, getThis(), "O", &_this_zval, CouchDB_ce_ptr) == FAILURE) {
		return;
	}

	_this_ce = Z_OBJCE_P(_this_zval);


	array_init(return_value);

	php_error(E_WARNING, "getDatabases: not yet implemented"); RETURN_FALSE;

	array_init(return_value);
}
/* }}} getDatabases */



/* {{{ proto string createDocument(string json)
   */
PHP_METHOD(CouchDB, createDocument)
{
	zend_class_entry * _this_ce;

	zval * _this_zval = NULL;
	const char * json = NULL;
	int json_len = 0;



	if (zend_parse_method_parameters(ZEND_NUM_ARGS() TSRMLS_CC, getThis(), "Os", &_this_zval, CouchDB_ce_ptr, &json, &json_len) == FAILURE) {
		return;
	}

	_this_ce = Z_OBJCE_P(_this_zval);


	php_error(E_WARNING, "createDocument: not yet implemented"); RETURN_FALSE;

	RETURN_STRINGL("", 0, 1);
}
/* }}} createDocument */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_revision)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_revision: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_revision */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_bare_info)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_bare_info: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_bare_info */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_update)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_update: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_update */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_delete)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_delete: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_delete */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_copy)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_copy: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_copy */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_get_attachment)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_get_attachment: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_get_attachment */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_add_attachment)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_add_attachment: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_add_attachment */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_delete_attachment)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_delete_attachment: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_delete_attachment */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_info)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_info: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_info */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_create)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_create: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_create */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_delete)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_delete: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_delete */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_documents)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_documents: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_documents */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_documents_rows)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_documents_rows: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_documents_rows */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_bulk_add_documents)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_bulk_add_documents: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_bulk_add_documents */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_changes)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_changes: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_changes */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_compact)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_compact: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_compact */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_compact_design_doc)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_compact_design_doc: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_compact_design_doc */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_ensure_full_commit)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_ensure_full_commit: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_ensure_full_commit */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_missing_revs)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_missing_revs: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_missing_revs */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_purge_historical_documents)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_purge_historical_documents: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_purge_historical_documents */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_view_execute)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_view_execute: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_view_execute */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_db_view_cleanup)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_db_view_cleanup: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_db_view_cleanup */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_find_by_id)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_find_by_id: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_find_by_id */



/* {{{ proto void unknown(void)
   */
PHP_METHOD(CouchDB, couchdb_document_find_by_revision)
{
	zend_class_entry * _this_ce;



	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}


	php_error(E_WARNING, "couchdb_document_find_by_revision: not yet implemented"); RETURN_FALSE;

	/* UNKNOWN RETURN TYPE '' */
}
/* }}} couchdb_document_find_by_revision */


static zend_function_entry CouchDB_methods[] = {
	PHP_ME(CouchDB, getDatabases, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, createDocument, CouchDB__createDocument_args, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_revision, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_bare_info, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_update, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_delete, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_copy, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_get_attachment, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_add_attachment, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_delete_attachment, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_info, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_create, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_delete, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_documents, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_documents_rows, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_bulk_add_documents, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_changes, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_compact, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_compact_design_doc, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_ensure_full_commit, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_missing_revs, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_purge_historical_documents, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_view_execute, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_db_view_cleanup, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_find_by_id, NULL, /**/ZEND_ACC_PUBLIC)
	PHP_ME(CouchDB, couchdb_document_find_by_revision, NULL, /**/ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};

/* }}} Methods */

static void class_init_CouchDB(void)
{
	zend_class_entry ce;

	INIT_CLASS_ENTRY(ce, "CouchDB", CouchDB_methods);
	CouchDB_ce_ptr = zend_register_internal_class(&ce);

	/* {{{ Property registration */

	zend_declare_property_string(CouchDB_ce_ptr, 
		"db", 2, "", 
		ZEND_ACC_PROTECTED TSRMLS_DC);

	/* }}} Property registration */

}

/* }}} Class CouchDB */

/* }}} Class definitions*/

/* {{{ couchdb_functions[] */
function_entry couchdb_functions[] = {
	{ NULL, NULL, NULL }
};
/* }}} */


/* {{{ couchdb_module_entry
 */
zend_module_entry couchdb_module_entry = {
	STANDARD_MODULE_HEADER,
	"couchdb",
	couchdb_functions,
	PHP_MINIT(couchdb),     /* Replace with NULL if there is nothing to do at php startup   */ 
	PHP_MSHUTDOWN(couchdb), /* Replace with NULL if there is nothing to do at php shutdown  */
	PHP_RINIT(couchdb),     /* Replace with NULL if there is nothing to do at request start */
	PHP_RSHUTDOWN(couchdb), /* Replace with NULL if there is nothing to do at request end   */
	PHP_MINFO(couchdb),
	PHP_COUCHDB_VERSION, 
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_COUCHDB
ZEND_GET_MODULE(couchdb)
#endif


/* {{{ globals and ini entries */
ZEND_DECLARE_MODULE_GLOBALS(couchdb)


#ifndef ZEND_ENGINE_2
#define OnUpdateLong OnUpdateInt
#endif
PHP_INI_BEGIN()
  STD_PHP_INI_ENTRY("couchdb.debug", "false", PHP_INI_ALL, OnUpdateBool, debug, zend_couchdb_globals, couchdb_globals)
PHP_INI_END()

static void php_couchdb_init_globals(zend_couchdb_globals *couchdb_globals)
{
	couchdb_globals->couchdb_sample_int = 42;
	couchdb_globals->debug = 0;

}

static void php_couchdb_shutdown_globals(zend_couchdb_globals *couchdb_globals)
{
}/* }}} */


/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(couchdb)
{
	ZEND_INIT_MODULE_GLOBALS(couchdb, php_couchdb_init_globals, php_couchdb_shutdown_globals)
	REGISTER_INI_ENTRIES();
	REGISTER_STRINGL_CONSTANT("COUCHDB_UUID_RANDOM", "random", 6, CONST_PERSISTENT | CONST_CS);
	REGISTER_STRINGL_CONSTANT("COUCHDB_UUID_SEQUENTIAL", "sequential", 10, CONST_PERSISTENT | CONST_CS);
	REGISTER_STRINGL_CONSTANT("COUCHDB_UUID_UTC_RANDOM", "utc_random", 10, CONST_PERSISTENT | CONST_CS);
	REGISTER_STRINGL_CONSTANT("COUCHDB_UUID_UTC_ID_AND_PARAMETERS", "utc_id", 6, CONST_PERSISTENT | CONST_CS);
	class_init_CouchDB();

	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_MSHUTDOWN_FUNCTION */
PHP_MSHUTDOWN_FUNCTION(couchdb)
{
	UNREGISTER_INI_ENTRIES();

	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(couchdb)
{
	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_RSHUTDOWN_FUNCTION */
PHP_RSHUTDOWN_FUNCTION(couchdb)
{
	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(couchdb)
{
	php_printf("CouchDB Wrapper for PHP\n");
	php_info_print_table_start();
	php_info_print_table_row(2, "Version",PHP_COUCHDB_VERSION " (alpha)");
	php_info_print_table_row(2, "Released", "2014-01-22");
	php_info_print_table_row(2, "CVS Revision", "$Id: $");
	php_info_print_table_row(2, "Authors", "Christoph, René Pardon 'christoph@renepardon.de' (lead)\n");
	php_info_print_table_end();
	/* add your stuff here */

	DISPLAY_INI_ENTRIES();
}
/* }}} */

#endif /* HAVE_COUCHDB */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
