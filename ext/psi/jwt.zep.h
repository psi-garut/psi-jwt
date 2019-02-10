
extern zend_class_entry *psi_jwt_ce;

ZEPHIR_INIT_CLASS(Psi_Jwt);

PHP_METHOD(Psi_Jwt, __construct);
PHP_METHOD(Psi_Jwt, sign);
PHP_METHOD(Psi_Jwt, decode);
PHP_METHOD(Psi_Jwt, verify);
void zep_Psi_Jwt_sign_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *configs_ext , zval *headers_ext , zval *payloads_ext );
void zep_Psi_Jwt_decode_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *token_ext );
void zep_Psi_Jwt_verify_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *configs_ext , zval *token_ext );

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_sign, 0, 0, 3)
	ZEND_ARG_INFO(0, configs)
	ZEND_ARG_INFO(0, headers)
	ZEND_ARG_INFO(0, payloads)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_decode, 0, 0, 1)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_verify, 0, 0, 2)
	ZEND_ARG_INFO(0, configs)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_sign_zephir_internal_call, 0, 0, 3)
	ZEND_ARG_INFO(0, configs)
	ZEND_ARG_INFO(0, headers)
	ZEND_ARG_INFO(0, payloads)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_decode_zephir_internal_call, 0, 0, 1)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psi_jwt_verify_zephir_internal_call, 0, 0, 2)
	ZEND_ARG_INFO(0, configs)
	ZEND_ARG_INFO(0, token)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psi_jwt_method_entry) {
	PHP_ME(Psi_Jwt, __construct, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_CTOR)
	PHP_ME(Psi_Jwt, sign, arginfo_psi_jwt_sign, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Psi_Jwt, decode, arginfo_psi_jwt_decode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Psi_Jwt, verify, arginfo_psi_jwt_verify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
