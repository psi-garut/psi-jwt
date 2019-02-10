
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "psi.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *psi_jwt_ce;

ZEND_DECLARE_MODULE_GLOBALS(psi)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(psi)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Psi_Jwt);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(psi)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_psi_globals *psi_globals TSRMLS_DC)
{
	psi_globals->initialized = 0;

	/* Memory options */
	psi_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	psi_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	psi_globals->cache_enabled = 1;

	/* Recursive Lock */
	psi_globals->recursive_lock = 0;

	/* Static cache */
	memset(psi_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_psi_globals *psi_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(psi)
{
	zend_psi_globals *psi_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	psi_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(psi_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(psi_globals_ptr TSRMLS_CC);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(psi)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(psi)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PSI_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PSI_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PSI_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PSI_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Compiler", "Version " PHP_PSI_ZEPVERSION);
	php_info_print_table_end();
		php_info_print_table_start();
	php_info_print_table_header(2, "Entry", "Address");
	php_info_print_table_row(2, "email", "deecoolist@gmail.com");
	php_info_print_table_row(2, "repository", "https://github.com/psi-garut/psi-jwt");
	php_info_print_table_row(2, "website", "https://github.psi.fyi/psi-jwt");
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(psi)
{
	php_zephir_init_globals(psi_globals TSRMLS_CC);
	php_zephir_init_module_globals(psi_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(psi)
{
	
}


zend_function_entry php_psi_functions[] = {
	ZEND_FE_END

};

zend_module_entry psi_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_PSI_EXTNAME,
	php_psi_functions,
	PHP_MINIT(psi),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(psi),
#else
	NULL,
#endif
	PHP_RINIT(psi),
	PHP_RSHUTDOWN(psi),
	PHP_MINFO(psi),
	PHP_PSI_VERSION,
	ZEND_MODULE_GLOBALS(psi),
	PHP_GINIT(psi),
	PHP_GSHUTDOWN(psi),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(psi),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_PSI
ZEND_GET_MODULE(psi)
#endif
