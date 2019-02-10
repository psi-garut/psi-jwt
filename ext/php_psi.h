
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_PSI_H
#define PHP_PSI_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_PSI_NAME        "JWT of PSI"
#define PHP_PSI_VERSION     "0.0.1"
#define PHP_PSI_EXTNAME     "psi"
#define PHP_PSI_AUTHOR      "Deni Herdiman"
#define PHP_PSI_ZEPVERSION  "0.10.10"
#define PHP_PSI_DESCRIPTION "Simple JSON Web Authenz & Encryptions"



ZEND_BEGIN_MODULE_GLOBALS(psi)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(psi)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(psi)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(psi, v)
#else
	#define ZEPHIR_GLOBAL(v) (psi_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_psi_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(psi_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(psi_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def psi_globals
#define zend_zephir_globals_def zend_psi_globals

extern zend_module_entry psi_module_entry;
#define phpext_psi_ptr &psi_module_entry

#endif
