#ifndef ZEPHIR_KERNEL_FCALL_INTERNAL_H
#define ZEPHIR_KERNEL_FCALL_INTERNAL_H
	#define ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(return_value_ptr, scope_ce, method, p0) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0; \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			ZVAL_COPY(&_p0, p0); \
			method(0, return_value_ptr, NULL, 1, &_p0); \
			Z_TRY_DELREF_P(p0); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
#endif
