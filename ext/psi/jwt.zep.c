
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/exception.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Psi_Jwt) {

	ZEPHIR_REGISTER_CLASS(Psi, Jwt, psi, jwt, psi_jwt_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Psi_Jwt, __construct) {

	zval *this_ptr = getThis();



}

PHP_METHOD(Psi_Jwt, sign) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_4 = NULL, *_8 = NULL, *_13 = NULL, *_36 = NULL, *_40 = NULL;
	zval *configs = NULL, configs_sub, *headers = NULL, headers_sub, *payloads = NULL, payloads_sub, __$true, res, exception, data, hash_generator, public_key_bio, private_key_bio, signature, segments, hmacsha, _17, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _37, _38, _39, _41, _42, _43, _44, _45, _46, _47, _48, _0$$3, _9$$3, _1$$4, _2$$5, _3$$5, _5$$6, _6$$7, _7$$7, _10$$8, _11$$9, _12$$9, _14$$10, _15$$11, _16$$11, _18$$12, _49$$27, _50$$28, _51$$28, _52$$28, _53$$28, _54$$28, _55$$29, _56$$29, _57$$30, _58$$30, _59$$31, _60$$31, _61$$31, _62$$31, _63$$31;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&configs_sub);
	ZVAL_UNDEF(&headers_sub);
	ZVAL_UNDEF(&payloads_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&res);
	ZVAL_UNDEF(&exception);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&hash_generator);
	ZVAL_UNDEF(&public_key_bio);
	ZVAL_UNDEF(&private_key_bio);
	ZVAL_UNDEF(&signature);
	ZVAL_UNDEF(&segments);
	ZVAL_UNDEF(&hmacsha);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_29);
	ZVAL_UNDEF(&_30);
	ZVAL_UNDEF(&_31);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_33);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_35);
	ZVAL_UNDEF(&_37);
	ZVAL_UNDEF(&_38);
	ZVAL_UNDEF(&_39);
	ZVAL_UNDEF(&_41);
	ZVAL_UNDEF(&_42);
	ZVAL_UNDEF(&_43);
	ZVAL_UNDEF(&_44);
	ZVAL_UNDEF(&_45);
	ZVAL_UNDEF(&_46);
	ZVAL_UNDEF(&_47);
	ZVAL_UNDEF(&_48);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_5$$6);
	ZVAL_UNDEF(&_6$$7);
	ZVAL_UNDEF(&_7$$7);
	ZVAL_UNDEF(&_10$$8);
	ZVAL_UNDEF(&_11$$9);
	ZVAL_UNDEF(&_12$$9);
	ZVAL_UNDEF(&_14$$10);
	ZVAL_UNDEF(&_15$$11);
	ZVAL_UNDEF(&_16$$11);
	ZVAL_UNDEF(&_18$$12);
	ZVAL_UNDEF(&_49$$27);
	ZVAL_UNDEF(&_50$$28);
	ZVAL_UNDEF(&_51$$28);
	ZVAL_UNDEF(&_52$$28);
	ZVAL_UNDEF(&_53$$28);
	ZVAL_UNDEF(&_54$$28);
	ZVAL_UNDEF(&_55$$29);
	ZVAL_UNDEF(&_56$$29);
	ZVAL_UNDEF(&_57$$30);
	ZVAL_UNDEF(&_58$$30);
	ZVAL_UNDEF(&_59$$31);
	ZVAL_UNDEF(&_60$$31);
	ZVAL_UNDEF(&_61$$31);
	ZVAL_UNDEF(&_62$$31);
	ZVAL_UNDEF(&_63$$31);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &configs, &headers, &payloads);




	/* try_start_1: */

		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_array_fetch_string(&_0$$3, configs, SL("public_key"), PH_NOISY, "psi/jwt.zep", 24 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_0$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_1$$4);
			zephir_array_fetch_string(&_1$$4, configs, SL("public_key_pass"), PH_NOISY, "psi/jwt.zep", 25 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_1$$4))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_2$$5, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 26 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_3$$5, configs, SL("public_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 26 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", &_4, 1, &_2$$5, &_3$$5);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_5$$6, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 28 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", &_4, 1, &_5$$6);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_6$$7);
			object_init_ex(&_6$$7, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_7$$7, "openssl_error_string", &_8, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_6$$7, "__construct", NULL, 3, &_7$$7);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_6$$7, "psi/jwt.zep", 31 TSRMLS_CC);
			goto try_end_1;

		}
		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_9$$3);
		zephir_array_fetch_string(&_9$$3, configs, SL("private_key"), PH_NOISY, "psi/jwt.zep", 33 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_9$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_10$$8);
			zephir_array_fetch_string(&_10$$8, configs, SL("private_key_pass"), PH_NOISY, "psi/jwt.zep", 34 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_10$$8))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_11$$9, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 35 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_12$$9, configs, SL("private_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 35 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", &_13, 4, &_11$$9, &_12$$9);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_14$$10, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 37 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", &_13, 4, &_14$$10);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_15$$11);
			object_init_ex(&_15$$11, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_16$$11, "openssl_error_string", &_8, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_15$$11, "__construct", NULL, 3, &_16$$11);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_15$$11, "psi/jwt.zep", 40 TSRMLS_CC);
			goto try_end_1;

		}

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_VAR(&_17);
		ZVAL_OBJ(&_17, EG(exception));
		Z_ADDREF_P(&_17);
		if (zephir_instance_of_ev(&_17, zend_exception_get_default(TSRMLS_C) TSRMLS_CC)) {
			zend_clear_exception(TSRMLS_C);
			ZEPHIR_CPY_WRT(&exception, &_17);
			ZEPHIR_CHECK_POINTER(exception);
			ZEPHIR_CALL_METHOD(&_18$$12, &exception, "getmessage", NULL, 0);
			zephir_check_call_status();
			zend_print_zval(&_18$$12, 0);
		}
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_19, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_19, "MD4")) {
		ZEPHIR_INIT_VAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 3);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_20, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_20, "MD5")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 2);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_21, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_21, "RS1")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 1);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_22, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_22, "RMD160")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 10);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_23, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_23, "RS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 6);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_24, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_24, "RS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 7);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_25, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_25, "RS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 8);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_26, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_26, "RS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 9);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_27, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_27, "HS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_28, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_28, "HS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha256");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_29, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_29, "HS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha384");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_30, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_30, "HS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_31, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_31, "HS512/224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_32, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_32, "HS512/256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/256");
	}
	ZEPHIR_INIT_VAR(&segments);
	array_init(&segments);
	ZEPHIR_INIT_VAR(&_33);
	ZEPHIR_INIT_VAR(&_34);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_json_encode(&_34, headers, 0 );
	ZEPHIR_CALL_FUNCTION(&_35, "base64_encode", &_36, 5, &_34);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_37);
	ZVAL_STRING(&_37, "+/");
	ZEPHIR_INIT_VAR(&_38);
	ZVAL_STRING(&_38, "-_");
	ZEPHIR_CALL_FUNCTION(&_39, "strtr", &_40, 6, &_35, &_37, &_38);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_37);
	ZVAL_STRING(&_37, "=");
	ZEPHIR_INIT_NVAR(&_38);
	ZVAL_STRING(&_38, "");
	zephir_fast_str_replace(&_33, &_37, &_38, &_39 TSRMLS_CC);
	zephir_array_append(&segments, &_33, PH_SEPARATE, "psi/jwt.zep", 103);
	ZEPHIR_INIT_VAR(&_41);
	ZEPHIR_INIT_VAR(&_42);
	ZEPHIR_CHECK_POINTER(payloads);
	zephir_json_encode(&_42, payloads, 0 );
	ZEPHIR_CALL_FUNCTION(&_43, "base64_encode", &_36, 5, &_42);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_44);
	ZVAL_STRING(&_44, "+/");
	ZEPHIR_INIT_VAR(&_45);
	ZVAL_STRING(&_45, "-_");
	ZEPHIR_CALL_FUNCTION(&_46, "strtr", &_40, 6, &_43, &_44, &_45);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_44);
	ZVAL_STRING(&_44, "=");
	ZEPHIR_INIT_NVAR(&_45);
	ZVAL_STRING(&_45, "");
	zephir_fast_str_replace(&_41, &_44, &_45, &_46 TSRMLS_CC);
	zephir_array_append(&segments, &_41, PH_SEPARATE, "psi/jwt.zep", 104);
	ZEPHIR_CHECK_POINTER(segments);
	ZEPHIR_INIT_VAR(&data);
	zephir_fast_join_str(&data, SL("."), &segments TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(data);
	ZEPHIR_INIT_VAR(&hmacsha);
	zephir_create_array(&hmacsha, 6, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_47);
	ZVAL_STRING(&_47, "HS224");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_INIT_NVAR(&_47);
	ZVAL_STRING(&_47, "HS256");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_INIT_NVAR(&_47);
	ZVAL_STRING(&_47, "HS384");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_INIT_NVAR(&_47);
	ZVAL_STRING(&_47, "HS512");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_INIT_NVAR(&_47);
	ZVAL_STRING(&_47, "HS512/224");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_INIT_NVAR(&_47);
	ZVAL_STRING(&_47, "HS512/256");
	zephir_array_fast_append(&hmacsha, &_47);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_48, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CHECK_POINTER(hmacsha);
	if (!(zephir_fast_in_array(&_48, &hmacsha TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&signature);
		ZVAL_NULL(&signature);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CHECK_POINTER(signature);
		ZEPHIR_CHECK_POINTER(private_key_bio);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_MAKE_REF(&signature);
		ZEPHIR_CALL_FUNCTION(&_49$$27, "openssl_sign", NULL, 7, &data, &signature, &private_key_bio, &hash_generator);
		ZEPHIR_UNREF(&signature);
		zephir_check_call_status();
		if (zephir_is_true(&_49$$27)) {
			ZEPHIR_CHECK_POINTER(data);
			ZEPHIR_INIT_VAR(&_50$$28);
			ZEPHIR_CHECK_POINTER(signature);
			ZEPHIR_CALL_FUNCTION(&_51$$28, "base64_encode", &_36, 5, &signature);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_52$$28);
			ZVAL_STRING(&_52$$28, "+/");
			ZEPHIR_INIT_VAR(&_53$$28);
			ZVAL_STRING(&_53$$28, "-_");
			ZEPHIR_CALL_FUNCTION(&_54$$28, "strtr", &_40, 6, &_51$$28, &_52$$28, &_53$$28);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(&_52$$28);
			ZVAL_STRING(&_52$$28, "=");
			ZEPHIR_INIT_NVAR(&_53$$28);
			ZVAL_STRING(&_53$$28, "");
			zephir_fast_str_replace(&_50$$28, &_52$$28, &_53$$28, &_54$$28 TSRMLS_CC);
			ZEPHIR_INIT_VAR(&res);
			ZEPHIR_CONCAT_VSV(&res, &data, ".", &_50$$28);
			ZEPHIR_CHECK_POINTER(res);
		} else {
			ZEPHIR_INIT_VAR(&_55$$29);
			object_init_ex(&_55$$29, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_56$$29, "openssl_error_string", &_8, 2);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &_55$$29, "__construct", NULL, 3, &_56$$29);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_55$$29, "psi/jwt.zep", 114 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} else {
		ZEPHIR_CHECK_POINTER(headers);
		zephir_read_property(&_57$$30, headers, SL("kid"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CALL_FUNCTION(&_58$$30, "hash_hmac", NULL, 8, &hash_generator, &data, &_57$$30, &__$true);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&signature, "base64_encode", &_36, 5, &_58$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(signature);
		ZEPHIR_CHECK_POINTER(signature);
		if (!(ZEPHIR_IS_EMPTY(&signature))) {
			ZEPHIR_CHECK_POINTER(data);
			ZEPHIR_INIT_VAR(&_59$$31);
			ZEPHIR_CHECK_POINTER(signature);
			ZEPHIR_CALL_FUNCTION(&_60$$31, "base64_encode", &_36, 5, &signature);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_61$$31);
			ZVAL_STRING(&_61$$31, "+/");
			ZEPHIR_INIT_VAR(&_62$$31);
			ZVAL_STRING(&_62$$31, "-_");
			ZEPHIR_CALL_FUNCTION(&_63$$31, "strtr", &_40, 6, &_60$$31, &_61$$31, &_62$$31);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(&_61$$31);
			ZVAL_STRING(&_61$$31, "=");
			ZEPHIR_INIT_NVAR(&_62$$31);
			ZVAL_STRING(&_62$$31, "");
			zephir_fast_str_replace(&_59$$31, &_61$$31, &_62$$31, &_63$$31 TSRMLS_CC);
			ZEPHIR_INIT_NVAR(&res);
			ZEPHIR_CONCAT_VSV(&res, &data, ".", &_59$$31);
			ZEPHIR_CHECK_POINTER(res);
		} else {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "signature generation failed!", "psi/jwt.zep", 121);
			return;
		}
	}
	ZEPHIR_CHECK_POINTER(res);
	RETURN_CCTOR(&res);

}

PHP_METHOD(Psi_Jwt, decode) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_5 = NULL, *_7 = NULL;
	zval *token = NULL, token_sub, seg, dec, _0, _1, _2, _3, _4, _6, _8, _9, _10, _11, _12, _13, _14;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&token_sub);
	ZVAL_UNDEF(&seg);
	ZVAL_UNDEF(&dec);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &token);



	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_INIT_VAR(&seg);
	zephir_fast_explode_str(&seg, SL("."), token, LONG_MAX TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(seg);
	ZEPHIR_INIT_VAR(&dec);
	array_init(&dec);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_1, &seg, 0, PH_NOISY | PH_READONLY, "psi/jwt.zep", 133 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "-_");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "+/");
	ZEPHIR_CALL_FUNCTION(&_4, "strtr", &_5, 6, &_1, &_2, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_6, "base64_decode", &_7, 9, &_4);
	zephir_check_call_status();
	zephir_json_decode(&_0, &_6, 0 );
	zephir_array_append(&dec, &_0, PH_SEPARATE, "psi/jwt.zep", 133);
	ZEPHIR_INIT_NVAR(&_2);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_8, &seg, 1, PH_NOISY | PH_READONLY, "psi/jwt.zep", 134 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "-_");
	ZEPHIR_INIT_VAR(&_9);
	ZVAL_STRING(&_9, "+/");
	ZEPHIR_CALL_FUNCTION(&_10, "strtr", &_5, 6, &_8, &_3, &_9);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_11, "base64_decode", &_7, 9, &_10);
	zephir_check_call_status();
	zephir_json_decode(&_2, &_11, 0 );
	zephir_array_append(&dec, &_2, PH_SEPARATE, "psi/jwt.zep", 134);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_12, &seg, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 135 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "-_");
	ZEPHIR_INIT_NVAR(&_9);
	ZVAL_STRING(&_9, "+/");
	ZEPHIR_CALL_FUNCTION(&_13, "strtr", &_5, 6, &_12, &_3, &_9);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_14);
	ZEPHIR_CONCAT_VS(&_14, &_13, "==");
	zephir_array_append(&dec, &_14, PH_SEPARATE, "psi/jwt.zep", 135);
	ZEPHIR_CHECK_POINTER(dec);
	RETURN_CCTOR(&dec);

}

PHP_METHOD(Psi_Jwt, verify) {

	zend_bool res = 0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_4 = NULL, *_8 = NULL, *_13 = NULL, *_37 = NULL, *_43 = NULL;
	zval *configs = NULL, configs_sub, *token = NULL, token_sub, __$true, data, dec, segs_t, exception, headers, hash_generator, hmacsha, private_key_bio, public_key_bio, _17, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _38, _39, _40, _0$$3, _9$$3, _1$$4, _2$$5, _3$$5, _5$$6, _6$$7, _7$$7, _10$$8, _11$$9, _12$$9, _14$$10, _15$$11, _16$$11, _18$$12, _41$$27, _42$$27, _44$$27, _45$$29, _46$$29, hash$$30, _47$$30, _48$$30, _49$$30, _50$$30, _51$$30;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&configs_sub);
	ZVAL_UNDEF(&token_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&dec);
	ZVAL_UNDEF(&segs_t);
	ZVAL_UNDEF(&exception);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&hash_generator);
	ZVAL_UNDEF(&hmacsha);
	ZVAL_UNDEF(&private_key_bio);
	ZVAL_UNDEF(&public_key_bio);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_29);
	ZVAL_UNDEF(&_30);
	ZVAL_UNDEF(&_31);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_33);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_35);
	ZVAL_UNDEF(&_36);
	ZVAL_UNDEF(&_38);
	ZVAL_UNDEF(&_39);
	ZVAL_UNDEF(&_40);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_9$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_5$$6);
	ZVAL_UNDEF(&_6$$7);
	ZVAL_UNDEF(&_7$$7);
	ZVAL_UNDEF(&_10$$8);
	ZVAL_UNDEF(&_11$$9);
	ZVAL_UNDEF(&_12$$9);
	ZVAL_UNDEF(&_14$$10);
	ZVAL_UNDEF(&_15$$11);
	ZVAL_UNDEF(&_16$$11);
	ZVAL_UNDEF(&_18$$12);
	ZVAL_UNDEF(&_41$$27);
	ZVAL_UNDEF(&_42$$27);
	ZVAL_UNDEF(&_44$$27);
	ZVAL_UNDEF(&_45$$29);
	ZVAL_UNDEF(&_46$$29);
	ZVAL_UNDEF(&hash$$30);
	ZVAL_UNDEF(&_47$$30);
	ZVAL_UNDEF(&_48$$30);
	ZVAL_UNDEF(&_49$$30);
	ZVAL_UNDEF(&_50$$30);
	ZVAL_UNDEF(&_51$$30);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &configs, &token);




	/* try_start_1: */

		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_array_fetch_string(&_0$$3, configs, SL("public_key"), PH_NOISY, "psi/jwt.zep", 150 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_0$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_1$$4);
			zephir_array_fetch_string(&_1$$4, configs, SL("public_key_pass"), PH_NOISY, "psi/jwt.zep", 151 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_1$$4))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_2$$5, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 152 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_3$$5, configs, SL("public_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 152 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", &_4, 1, &_2$$5, &_3$$5);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_5$$6, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 154 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", &_4, 1, &_5$$6);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_6$$7);
			object_init_ex(&_6$$7, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_7$$7, "openssl_error_string", &_8, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_6$$7, "__construct", NULL, 3, &_7$$7);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_6$$7, "psi/jwt.zep", 157 TSRMLS_CC);
			goto try_end_1;

		}
		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_9$$3);
		zephir_array_fetch_string(&_9$$3, configs, SL("private_key"), PH_NOISY, "psi/jwt.zep", 160 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_9$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_10$$8);
			zephir_array_fetch_string(&_10$$8, configs, SL("private_key_pass"), PH_NOISY, "psi/jwt.zep", 161 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_10$$8))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_11$$9, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 162 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_12$$9, configs, SL("private_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 162 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", &_13, 4, &_11$$9, &_12$$9);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_14$$10, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 164 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", &_13, 4, &_14$$10);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_15$$11);
			object_init_ex(&_15$$11, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_16$$11, "openssl_error_string", &_8, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_15$$11, "__construct", NULL, 3, &_16$$11);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_15$$11, "psi/jwt.zep", 167 TSRMLS_CC);
			goto try_end_1;

		}

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_VAR(&_17);
		ZVAL_OBJ(&_17, EG(exception));
		Z_ADDREF_P(&_17);
		if (zephir_instance_of_ev(&_17, zend_exception_get_default(TSRMLS_C) TSRMLS_CC)) {
			zend_clear_exception(TSRMLS_C);
			ZEPHIR_CPY_WRT(&exception, &_17);
			ZEPHIR_CHECK_POINTER(exception);
			ZEPHIR_CALL_METHOD(&_18$$12, &exception, "getmessage", NULL, 0);
			zephir_check_call_status();
			zend_print_zval(&_18$$12, 0);
		}
	}
	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_INIT_VAR(&segs_t);
	zephir_fast_explode_str(&segs_t, SL("."), token, LONG_MAX TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(segs_t);
	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&dec, psi_jwt_ce, zep_Psi_Jwt_decode_zephir_internal_call, token);
	zephir_check_call_status();
	ZEPHIR_CHECK_POINTER(dec);
	ZEPHIR_CHECK_POINTER(dec);
	ZEPHIR_OBS_VAR(&headers);
	zephir_array_fetch_long(&headers, &dec, 0, PH_NOISY, "psi/jwt.zep", 175 TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(headers);
	res = 0;
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_19, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_19, "MD4")) {
		ZEPHIR_INIT_VAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 3);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_20, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_20, "MD5")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 2);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_21, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_21, "RS1")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 1);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_22, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_22, "RMD160")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 10);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_23, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_23, "RS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 6);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_24, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_24, "RS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 7);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_25, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_25, "RS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 8);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_26, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_26, "RS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 9);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_27, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_27, "HS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_28, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_28, "HS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha256");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_29, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_29, "HS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha384");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_30, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_30, "HS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_31, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_31, "HS512/224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_32, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_32, "HS512/256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/256");
	}
	ZEPHIR_CHECK_POINTER(segs_t);
	zephir_array_fetch_long(&_33, &segs_t, 0, PH_NOISY | PH_READONLY, "psi/jwt.zep", 234 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_34);
	ZVAL_STRING(&_34, "-_");
	ZEPHIR_INIT_VAR(&_35);
	ZVAL_STRING(&_35, "+/");
	ZEPHIR_CALL_FUNCTION(&_36, "strtr", &_37, 6, &_33, &_34, &_35);
	zephir_check_call_status();
	ZEPHIR_CHECK_POINTER(segs_t);
	zephir_array_fetch_long(&_38, &segs_t, 1, PH_NOISY | PH_READONLY, "psi/jwt.zep", 234 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "-_");
	ZEPHIR_INIT_NVAR(&_35);
	ZVAL_STRING(&_35, "+/");
	ZEPHIR_CALL_FUNCTION(&_39, "strtr", &_37, 6, &_38, &_34, &_35);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&data);
	ZEPHIR_CONCAT_VSV(&data, &_36, ".", &_39);
	ZEPHIR_CHECK_POINTER(data);
	ZEPHIR_INIT_VAR(&hmacsha);
	zephir_create_array(&hmacsha, 6, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS224");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS256");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS384");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS512");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS512/224");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "HS512/256");
	zephir_array_fast_append(&hmacsha, &_34);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_40, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CHECK_POINTER(hmacsha);
	if (!(zephir_fast_in_array(&_40, &hmacsha TSRMLS_CC))) {
		ZEPHIR_CHECK_POINTER(dec);
		zephir_array_fetch_long(&_41$$27, &dec, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 240 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_42$$27, "base64_decode", &_43, 9, &_41$$27);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CHECK_POINTER(public_key_bio);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CALL_FUNCTION(&_44$$27, "openssl_verify", NULL, 10, &data, &_42$$27, &public_key_bio, &hash_generator);
		zephir_check_call_status();
		if (zephir_is_true(&_44$$27)) {
			res = 1;
		} else {
			ZEPHIR_INIT_VAR(&_45$$29);
			object_init_ex(&_45$$29, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_46$$29, "openssl_error_string", &_8, 2);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &_45$$29, "__construct", NULL, 3, &_46$$29);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_45$$29, "psi/jwt.zep", 243 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} else {
		ZEPHIR_CHECK_POINTER(headers);
		zephir_read_property(&_47$$30, &headers, SL("kid"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CALL_FUNCTION(&_48$$30, "hash_hmac", NULL, 8, &hash_generator, &data, &_47$$30, &__$true);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&hash$$30, "base64_encode", NULL, 5, &_48$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(hash$$30);
		ZEPHIR_INIT_VAR(&_49$$30);
		ZEPHIR_CHECK_POINTER(dec);
		zephir_array_fetch_long(&_50$$30, &dec, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 248 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_51$$30, "base64_decode", &_43, 9, &_50$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(hash$$30);
		if (!(zephir_hash_equals(&hash$$30, &_51$$30))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "signature verification failed!", "psi/jwt.zep", 249);
			return;
		} else {
			res = 1;
		}
	}
	RETURN_MM_BOOL(res);

}

void zep_Psi_Jwt_sign_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *configs_ext , zval *headers_ext , zval *payloads_ext ) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *configs = NULL, configs_sub, *headers = NULL, headers_sub, *payloads = NULL, payloads_sub, __$true, res, exception, data, hash_generator, public_key_bio, private_key_bio, signature, segments, hmacsha, _14, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _0$$3, _7$$3, _1$$4, _2$$5, _3$$5, _4$$6, _5$$7, _6$$7, _8$$8, _9$$9, _10$$9, _11$$10, _12$$11, _13$$11, _15$$12, _44$$27, _45$$28, _46$$28, _47$$28, _48$$28, _49$$28, _50$$29, _51$$29, _52$$30, _53$$30, _54$$31, _55$$31, _56$$31, _57$$31, _58$$31;
		ZVAL_UNDEF(&configs_sub);
	ZVAL_UNDEF(&headers_sub);
	ZVAL_UNDEF(&payloads_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&res);
	ZVAL_UNDEF(&exception);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&hash_generator);
	ZVAL_UNDEF(&public_key_bio);
	ZVAL_UNDEF(&private_key_bio);
	ZVAL_UNDEF(&signature);
	ZVAL_UNDEF(&segments);
	ZVAL_UNDEF(&hmacsha);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_29);
	ZVAL_UNDEF(&_30);
	ZVAL_UNDEF(&_31);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_33);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_35);
	ZVAL_UNDEF(&_36);
	ZVAL_UNDEF(&_37);
	ZVAL_UNDEF(&_38);
	ZVAL_UNDEF(&_39);
	ZVAL_UNDEF(&_40);
	ZVAL_UNDEF(&_41);
	ZVAL_UNDEF(&_42);
	ZVAL_UNDEF(&_43);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_4$$6);
	ZVAL_UNDEF(&_5$$7);
	ZVAL_UNDEF(&_6$$7);
	ZVAL_UNDEF(&_8$$8);
	ZVAL_UNDEF(&_9$$9);
	ZVAL_UNDEF(&_10$$9);
	ZVAL_UNDEF(&_11$$10);
	ZVAL_UNDEF(&_12$$11);
	ZVAL_UNDEF(&_13$$11);
	ZVAL_UNDEF(&_15$$12);
	ZVAL_UNDEF(&_44$$27);
	ZVAL_UNDEF(&_45$$28);
	ZVAL_UNDEF(&_46$$28);
	ZVAL_UNDEF(&_47$$28);
	ZVAL_UNDEF(&_48$$28);
	ZVAL_UNDEF(&_49$$28);
	ZVAL_UNDEF(&_50$$29);
	ZVAL_UNDEF(&_51$$29);
	ZVAL_UNDEF(&_52$$30);
	ZVAL_UNDEF(&_53$$30);
	ZVAL_UNDEF(&_54$$31);
	ZVAL_UNDEF(&_55$$31);
	ZVAL_UNDEF(&_56$$31);
	ZVAL_UNDEF(&_57$$31);
	ZVAL_UNDEF(&_58$$31);

	ZEPHIR_MM_GROW();
	ZEPHIR_CHECK_POINTER(configs);
configs = configs_ext;

	ZEPHIR_CHECK_POINTER(headers);
headers = headers_ext;

	ZEPHIR_CHECK_POINTER(payloads);
payloads = payloads_ext;





	/* try_start_1: */

		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_array_fetch_string(&_0$$3, configs, SL("public_key"), PH_NOISY, "psi/jwt.zep", 24 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_0$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_1$$4);
			zephir_array_fetch_string(&_1$$4, configs, SL("public_key_pass"), PH_NOISY, "psi/jwt.zep", 25 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_1$$4))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_2$$5, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 26 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_3$$5, configs, SL("public_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 26 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", NULL, 1, &_2$$5, &_3$$5);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_4$$6, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 28 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", NULL, 1, &_4$$6);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_5$$7);
			object_init_ex(&_5$$7, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_6$$7, "openssl_error_string", NULL, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_5$$7, "__construct", NULL, 3, &_6$$7);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_5$$7, "psi/jwt.zep", 31 TSRMLS_CC);
			goto try_end_1;

		}
		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_7$$3);
		zephir_array_fetch_string(&_7$$3, configs, SL("private_key"), PH_NOISY, "psi/jwt.zep", 33 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_7$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_8$$8);
			zephir_array_fetch_string(&_8$$8, configs, SL("private_key_pass"), PH_NOISY, "psi/jwt.zep", 34 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_8$$8))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_9$$9, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 35 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_10$$9, configs, SL("private_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 35 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", NULL, 4, &_9$$9, &_10$$9);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_11$$10, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 37 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", NULL, 4, &_11$$10);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_12$$11);
			object_init_ex(&_12$$11, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_13$$11, "openssl_error_string", NULL, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_12$$11, "__construct", NULL, 3, &_13$$11);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_12$$11, "psi/jwt.zep", 40 TSRMLS_CC);
			goto try_end_1;

		}

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_VAR(&_14);
		ZVAL_OBJ(&_14, EG(exception));
		Z_ADDREF_P(&_14);
		if (zephir_instance_of_ev(&_14, zend_exception_get_default(TSRMLS_C) TSRMLS_CC)) {
			zend_clear_exception(TSRMLS_C);
			ZEPHIR_CPY_WRT(&exception, &_14);
			ZEPHIR_CHECK_POINTER(exception);
			ZEPHIR_CALL_METHOD(&_15$$12, &exception, "getmessage", NULL, 0);
			zephir_check_call_status();
			zend_print_zval(&_15$$12, 0);
		}
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_16, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_16, "MD4")) {
		ZEPHIR_INIT_VAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 3);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_17, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_17, "MD5")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 2);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_18, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_18, "RS1")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 1);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_19, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_19, "RMD160")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 10);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_20, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_20, "RS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 6);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_21, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_21, "RS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 7);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_22, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_22, "RS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 8);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_23, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_23, "RS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 9);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_24, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_24, "HS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_25, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_25, "HS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha256");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_26, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_26, "HS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha384");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_27, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_27, "HS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_28, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_28, "HS512/224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_29, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_29, "HS512/256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/256");
	}
	ZEPHIR_INIT_VAR(&segments);
	array_init(&segments);
	ZEPHIR_INIT_VAR(&_30);
	ZEPHIR_INIT_VAR(&_31);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_json_encode(&_31, headers, 0 );
	ZEPHIR_CALL_FUNCTION(&_32, "base64_encode", NULL, 5, &_31);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_33);
	ZVAL_STRING(&_33, "+/");
	ZEPHIR_INIT_VAR(&_34);
	ZVAL_STRING(&_34, "-_");
	ZEPHIR_CALL_FUNCTION(&_35, "strtr", NULL, 6, &_32, &_33, &_34);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_33);
	ZVAL_STRING(&_33, "=");
	ZEPHIR_INIT_NVAR(&_34);
	ZVAL_STRING(&_34, "");
	zephir_fast_str_replace(&_30, &_33, &_34, &_35 TSRMLS_CC);
	zephir_array_append(&segments, &_30, PH_SEPARATE, "psi/jwt.zep", 103);
	ZEPHIR_INIT_VAR(&_36);
	ZEPHIR_INIT_VAR(&_37);
	ZEPHIR_CHECK_POINTER(payloads);
	zephir_json_encode(&_37, payloads, 0 );
	ZEPHIR_CALL_FUNCTION(&_38, "base64_encode", NULL, 5, &_37);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_39);
	ZVAL_STRING(&_39, "+/");
	ZEPHIR_INIT_VAR(&_40);
	ZVAL_STRING(&_40, "-_");
	ZEPHIR_CALL_FUNCTION(&_41, "strtr", NULL, 6, &_38, &_39, &_40);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_39);
	ZVAL_STRING(&_39, "=");
	ZEPHIR_INIT_NVAR(&_40);
	ZVAL_STRING(&_40, "");
	zephir_fast_str_replace(&_36, &_39, &_40, &_41 TSRMLS_CC);
	zephir_array_append(&segments, &_36, PH_SEPARATE, "psi/jwt.zep", 104);
	ZEPHIR_CHECK_POINTER(segments);
	ZEPHIR_INIT_VAR(&data);
	zephir_fast_join_str(&data, SL("."), &segments TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(data);
	ZEPHIR_INIT_VAR(&hmacsha);
	zephir_create_array(&hmacsha, 6, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_42);
	ZVAL_STRING(&_42, "HS224");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_INIT_NVAR(&_42);
	ZVAL_STRING(&_42, "HS256");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_INIT_NVAR(&_42);
	ZVAL_STRING(&_42, "HS384");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_INIT_NVAR(&_42);
	ZVAL_STRING(&_42, "HS512");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_INIT_NVAR(&_42);
	ZVAL_STRING(&_42, "HS512/224");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_INIT_NVAR(&_42);
	ZVAL_STRING(&_42, "HS512/256");
	zephir_array_fast_append(&hmacsha, &_42);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_43, headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CHECK_POINTER(hmacsha);
	if (!(zephir_fast_in_array(&_43, &hmacsha TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&signature);
		ZVAL_NULL(&signature);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CHECK_POINTER(signature);
		ZEPHIR_CHECK_POINTER(private_key_bio);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_MAKE_REF(&signature);
		ZEPHIR_CALL_FUNCTION(&_44$$27, "openssl_sign", NULL, 7, &data, &signature, &private_key_bio, &hash_generator);
		ZEPHIR_UNREF(&signature);
		zephir_check_call_status();
		if (zephir_is_true(&_44$$27)) {
			ZEPHIR_CHECK_POINTER(data);
			ZEPHIR_INIT_VAR(&_45$$28);
			ZEPHIR_CHECK_POINTER(signature);
			ZEPHIR_CALL_FUNCTION(&_46$$28, "base64_encode", NULL, 5, &signature);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_47$$28);
			ZVAL_STRING(&_47$$28, "+/");
			ZEPHIR_INIT_VAR(&_48$$28);
			ZVAL_STRING(&_48$$28, "-_");
			ZEPHIR_CALL_FUNCTION(&_49$$28, "strtr", NULL, 6, &_46$$28, &_47$$28, &_48$$28);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(&_47$$28);
			ZVAL_STRING(&_47$$28, "=");
			ZEPHIR_INIT_NVAR(&_48$$28);
			ZVAL_STRING(&_48$$28, "");
			zephir_fast_str_replace(&_45$$28, &_47$$28, &_48$$28, &_49$$28 TSRMLS_CC);
			ZEPHIR_INIT_VAR(&res);
			ZEPHIR_CONCAT_VSV(&res, &data, ".", &_45$$28);
			ZEPHIR_CHECK_POINTER(res);
		} else {
			ZEPHIR_INIT_VAR(&_50$$29);
			object_init_ex(&_50$$29, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_51$$29, "openssl_error_string", NULL, 2);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &_50$$29, "__construct", NULL, 3, &_51$$29);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_50$$29, "psi/jwt.zep", 114 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} else {
		ZEPHIR_CHECK_POINTER(headers);
		zephir_read_property(&_52$$30, headers, SL("kid"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CALL_FUNCTION(&_53$$30, "hash_hmac", NULL, 8, &hash_generator, &data, &_52$$30, &__$true);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&signature, "base64_encode", NULL, 5, &_53$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(signature);
		ZEPHIR_CHECK_POINTER(signature);
		if (!(ZEPHIR_IS_EMPTY(&signature))) {
			ZEPHIR_CHECK_POINTER(data);
			ZEPHIR_INIT_VAR(&_54$$31);
			ZEPHIR_CHECK_POINTER(signature);
			ZEPHIR_CALL_FUNCTION(&_55$$31, "base64_encode", NULL, 5, &signature);
			zephir_check_call_status();
			ZEPHIR_INIT_VAR(&_56$$31);
			ZVAL_STRING(&_56$$31, "+/");
			ZEPHIR_INIT_VAR(&_57$$31);
			ZVAL_STRING(&_57$$31, "-_");
			ZEPHIR_CALL_FUNCTION(&_58$$31, "strtr", NULL, 6, &_55$$31, &_56$$31, &_57$$31);
			zephir_check_call_status();
			ZEPHIR_INIT_NVAR(&_56$$31);
			ZVAL_STRING(&_56$$31, "=");
			ZEPHIR_INIT_NVAR(&_57$$31);
			ZVAL_STRING(&_57$$31, "");
			zephir_fast_str_replace(&_54$$31, &_56$$31, &_57$$31, &_58$$31 TSRMLS_CC);
			ZEPHIR_INIT_NVAR(&res);
			ZEPHIR_CONCAT_VSV(&res, &data, ".", &_54$$31);
			ZEPHIR_CHECK_POINTER(res);
		} else {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "signature generation failed!", "psi/jwt.zep", 121);
			return;
		}
	}
	ZEPHIR_CHECK_POINTER(res);
	RETURN_CCTOR(&res);

}

void zep_Psi_Jwt_decode_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *token_ext ) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *token = NULL, token_sub, seg, dec, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12;
		ZVAL_UNDEF(&token_sub);
	ZVAL_UNDEF(&seg);
	ZVAL_UNDEF(&dec);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);

	ZEPHIR_MM_GROW();
	ZEPHIR_CHECK_POINTER(token);
token = token_ext;




	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_INIT_VAR(&seg);
	zephir_fast_explode_str(&seg, SL("."), token, LONG_MAX TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(seg);
	ZEPHIR_INIT_VAR(&dec);
	array_init(&dec);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_1, &seg, 0, PH_NOISY | PH_READONLY, "psi/jwt.zep", 133 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "-_");
	ZEPHIR_INIT_VAR(&_3);
	ZVAL_STRING(&_3, "+/");
	ZEPHIR_CALL_FUNCTION(&_4, "strtr", NULL, 6, &_1, &_2, &_3);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_5, "base64_decode", NULL, 9, &_4);
	zephir_check_call_status();
	zephir_json_decode(&_0, &_5, 0 );
	zephir_array_append(&dec, &_0, PH_SEPARATE, "psi/jwt.zep", 133);
	ZEPHIR_INIT_NVAR(&_2);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_6, &seg, 1, PH_NOISY | PH_READONLY, "psi/jwt.zep", 134 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "-_");
	ZEPHIR_INIT_VAR(&_7);
	ZVAL_STRING(&_7, "+/");
	ZEPHIR_CALL_FUNCTION(&_8, "strtr", NULL, 6, &_6, &_3, &_7);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&_9, "base64_decode", NULL, 9, &_8);
	zephir_check_call_status();
	zephir_json_decode(&_2, &_9, 0 );
	zephir_array_append(&dec, &_2, PH_SEPARATE, "psi/jwt.zep", 134);
	ZEPHIR_CHECK_POINTER(seg);
	zephir_array_fetch_long(&_10, &seg, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 135 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_3);
	ZVAL_STRING(&_3, "-_");
	ZEPHIR_INIT_NVAR(&_7);
	ZVAL_STRING(&_7, "+/");
	ZEPHIR_CALL_FUNCTION(&_11, "strtr", NULL, 6, &_10, &_3, &_7);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_12);
	ZEPHIR_CONCAT_VS(&_12, &_11, "==");
	zephir_array_append(&dec, &_12, PH_SEPARATE, "psi/jwt.zep", 135);
	ZEPHIR_CHECK_POINTER(dec);
	RETURN_CCTOR(&dec);

}

void zep_Psi_Jwt_verify_zephir_internal_call(int ht, zval *return_value, zval *this_ptr, int return_value_used, zval *configs_ext , zval *token_ext ) {

	zend_bool res = 0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *configs = NULL, configs_sub, *token = NULL, token_sub, __$true, data, dec, segs_t, exception, headers, hash_generator, hmacsha, private_key_bio, public_key_bio, _14, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _0$$3, _7$$3, _1$$4, _2$$5, _3$$5, _4$$6, _5$$7, _6$$7, _8$$8, _9$$9, _10$$9, _11$$10, _12$$11, _13$$11, _15$$12, _37$$27, _38$$27, _39$$27, _40$$29, _41$$29, hash$$30, _42$$30, _43$$30, _44$$30, _45$$30, _46$$30;
		ZVAL_UNDEF(&configs_sub);
	ZVAL_UNDEF(&token_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&dec);
	ZVAL_UNDEF(&segs_t);
	ZVAL_UNDEF(&exception);
	ZVAL_UNDEF(&headers);
	ZVAL_UNDEF(&hash_generator);
	ZVAL_UNDEF(&hmacsha);
	ZVAL_UNDEF(&private_key_bio);
	ZVAL_UNDEF(&public_key_bio);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_17);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_29);
	ZVAL_UNDEF(&_30);
	ZVAL_UNDEF(&_31);
	ZVAL_UNDEF(&_32);
	ZVAL_UNDEF(&_33);
	ZVAL_UNDEF(&_34);
	ZVAL_UNDEF(&_35);
	ZVAL_UNDEF(&_36);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_1$$4);
	ZVAL_UNDEF(&_2$$5);
	ZVAL_UNDEF(&_3$$5);
	ZVAL_UNDEF(&_4$$6);
	ZVAL_UNDEF(&_5$$7);
	ZVAL_UNDEF(&_6$$7);
	ZVAL_UNDEF(&_8$$8);
	ZVAL_UNDEF(&_9$$9);
	ZVAL_UNDEF(&_10$$9);
	ZVAL_UNDEF(&_11$$10);
	ZVAL_UNDEF(&_12$$11);
	ZVAL_UNDEF(&_13$$11);
	ZVAL_UNDEF(&_15$$12);
	ZVAL_UNDEF(&_37$$27);
	ZVAL_UNDEF(&_38$$27);
	ZVAL_UNDEF(&_39$$27);
	ZVAL_UNDEF(&_40$$29);
	ZVAL_UNDEF(&_41$$29);
	ZVAL_UNDEF(&hash$$30);
	ZVAL_UNDEF(&_42$$30);
	ZVAL_UNDEF(&_43$$30);
	ZVAL_UNDEF(&_44$$30);
	ZVAL_UNDEF(&_45$$30);
	ZVAL_UNDEF(&_46$$30);

	ZEPHIR_MM_GROW();
	ZEPHIR_CHECK_POINTER(configs);
configs = configs_ext;

	ZEPHIR_CHECK_POINTER(token);
token = token_ext;





	/* try_start_1: */

		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_0$$3);
		zephir_array_fetch_string(&_0$$3, configs, SL("public_key"), PH_NOISY, "psi/jwt.zep", 150 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_0$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_1$$4);
			zephir_array_fetch_string(&_1$$4, configs, SL("public_key_pass"), PH_NOISY, "psi/jwt.zep", 151 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_1$$4))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_2$$5, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 152 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_3$$5, configs, SL("public_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 152 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", NULL, 1, &_2$$5, &_3$$5);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_4$$6, configs, SL("public_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 154 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&public_key_bio, "openssl_get_publickey", NULL, 1, &_4$$6);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(public_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_5$$7);
			object_init_ex(&_5$$7, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_6$$7, "openssl_error_string", NULL, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_5$$7, "__construct", NULL, 3, &_6$$7);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_5$$7, "psi/jwt.zep", 157 TSRMLS_CC);
			goto try_end_1;

		}
		ZEPHIR_CHECK_POINTER(configs);
		ZEPHIR_OBS_VAR(&_7$$3);
		zephir_array_fetch_string(&_7$$3, configs, SL("private_key"), PH_NOISY, "psi/jwt.zep", 160 TSRMLS_CC);
		if (!(ZEPHIR_IS_EMPTY(&_7$$3))) {
			ZEPHIR_CHECK_POINTER(configs);
			ZEPHIR_OBS_VAR(&_8$$8);
			zephir_array_fetch_string(&_8$$8, configs, SL("private_key_pass"), PH_NOISY, "psi/jwt.zep", 161 TSRMLS_CC);
			if (!(ZEPHIR_IS_EMPTY(&_8$$8))) {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_9$$9, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 162 TSRMLS_CC);
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_10$$9, configs, SL("private_key_pass"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 162 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", NULL, 4, &_9$$9, &_10$$9);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			} else {
				ZEPHIR_CHECK_POINTER(configs);
				zephir_array_fetch_string(&_11$$10, configs, SL("private_key"), PH_NOISY | PH_READONLY, "psi/jwt.zep", 164 TSRMLS_CC);
				ZEPHIR_CALL_FUNCTION(&private_key_bio, "openssl_get_privatekey", NULL, 4, &_11$$10);
				zephir_check_call_status_or_jump(try_end_1);
				ZEPHIR_CHECK_POINTER(private_key_bio);
			}
		} else {
			ZEPHIR_INIT_VAR(&_12$$11);
			object_init_ex(&_12$$11, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_13$$11, "openssl_error_string", NULL, 2);
			zephir_check_call_status_or_jump(try_end_1);
			ZEPHIR_CALL_METHOD(NULL, &_12$$11, "__construct", NULL, 3, &_13$$11);
			zephir_check_call_status_or_jump(try_end_1);
			zephir_throw_exception_debug(&_12$$11, "psi/jwt.zep", 167 TSRMLS_CC);
			goto try_end_1;

		}

	try_end_1:

	if (EG(exception)) {
		ZEPHIR_INIT_VAR(&_14);
		ZVAL_OBJ(&_14, EG(exception));
		Z_ADDREF_P(&_14);
		if (zephir_instance_of_ev(&_14, zend_exception_get_default(TSRMLS_C) TSRMLS_CC)) {
			zend_clear_exception(TSRMLS_C);
			ZEPHIR_CPY_WRT(&exception, &_14);
			ZEPHIR_CHECK_POINTER(exception);
			ZEPHIR_CALL_METHOD(&_15$$12, &exception, "getmessage", NULL, 0);
			zephir_check_call_status();
			zend_print_zval(&_15$$12, 0);
		}
	}
	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_INIT_VAR(&segs_t);
	zephir_fast_explode_str(&segs_t, SL("."), token, LONG_MAX TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(segs_t);
	ZEPHIR_CHECK_POINTER(token);
	ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(&dec, psi_jwt_ce, zep_Psi_Jwt_decode_zephir_internal_call, token);
	zephir_check_call_status();
	ZEPHIR_CHECK_POINTER(dec);
	ZEPHIR_CHECK_POINTER(dec);
	ZEPHIR_OBS_VAR(&headers);
	zephir_array_fetch_long(&headers, &dec, 0, PH_NOISY, "psi/jwt.zep", 175 TSRMLS_CC);
	ZEPHIR_CHECK_POINTER(headers);
	res = 0;
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_16, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_16, "MD4")) {
		ZEPHIR_INIT_VAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 3);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_17, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_17, "MD5")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 2);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_18, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_18, "RS1")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 1);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_19, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_19, "RMD160")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 10);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_20, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_20, "RS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 6);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_21, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_21, "RS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 7);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_22, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_22, "RS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 8);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_23, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_23, "RS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_LONG(&hash_generator, 9);
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_24, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_24, "HS224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_25, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_25, "HS256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha256");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_26, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_26, "HS384")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha384");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_27, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_27, "HS512")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_28, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_28, "HS512/224")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/224");
	}
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_29, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_IS_STRING_IDENTICAL(&_29, "HS512/256")) {
		ZEPHIR_INIT_NVAR(&hash_generator);
		ZVAL_STRING(&hash_generator, "sha512/256");
	}
	ZEPHIR_CHECK_POINTER(segs_t);
	zephir_array_fetch_long(&_30, &segs_t, 0, PH_NOISY | PH_READONLY, "psi/jwt.zep", 234 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_31);
	ZVAL_STRING(&_31, "-_");
	ZEPHIR_INIT_VAR(&_32);
	ZVAL_STRING(&_32, "+/");
	ZEPHIR_CALL_FUNCTION(&_33, "strtr", NULL, 6, &_30, &_31, &_32);
	zephir_check_call_status();
	ZEPHIR_CHECK_POINTER(segs_t);
	zephir_array_fetch_long(&_34, &segs_t, 1, PH_NOISY | PH_READONLY, "psi/jwt.zep", 234 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "-_");
	ZEPHIR_INIT_NVAR(&_32);
	ZVAL_STRING(&_32, "+/");
	ZEPHIR_CALL_FUNCTION(&_35, "strtr", NULL, 6, &_34, &_31, &_32);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&data);
	ZEPHIR_CONCAT_VSV(&data, &_33, ".", &_35);
	ZEPHIR_CHECK_POINTER(data);
	ZEPHIR_INIT_VAR(&hmacsha);
	zephir_create_array(&hmacsha, 6, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS224");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS256");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS384");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS512");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS512/224");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_INIT_NVAR(&_31);
	ZVAL_STRING(&_31, "HS512/256");
	zephir_array_fast_append(&hmacsha, &_31);
	ZEPHIR_CHECK_POINTER(headers);
	zephir_read_property(&_36, &headers, SL("alg"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CHECK_POINTER(hmacsha);
	if (!(zephir_fast_in_array(&_36, &hmacsha TSRMLS_CC))) {
		ZEPHIR_CHECK_POINTER(dec);
		zephir_array_fetch_long(&_37$$27, &dec, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 240 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_38$$27, "base64_decode", NULL, 9, &_37$$27);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CHECK_POINTER(public_key_bio);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CALL_FUNCTION(&_39$$27, "openssl_verify", NULL, 10, &data, &_38$$27, &public_key_bio, &hash_generator);
		zephir_check_call_status();
		if (zephir_is_true(&_39$$27)) {
			res = 1;
		} else {
			ZEPHIR_INIT_VAR(&_40$$29);
			object_init_ex(&_40$$29, zend_exception_get_default(TSRMLS_C));
			ZEPHIR_CALL_FUNCTION(&_41$$29, "openssl_error_string", NULL, 2);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, &_40$$29, "__construct", NULL, 3, &_41$$29);
			zephir_check_call_status();
			zephir_throw_exception_debug(&_40$$29, "psi/jwt.zep", 243 TSRMLS_CC);
			ZEPHIR_MM_RESTORE();
			return;
		}
	} else {
		ZEPHIR_CHECK_POINTER(headers);
		zephir_read_property(&_42$$30, &headers, SL("kid"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CHECK_POINTER(hash_generator);
		ZEPHIR_CHECK_POINTER(data);
		ZEPHIR_CALL_FUNCTION(&_43$$30, "hash_hmac", NULL, 8, &hash_generator, &data, &_42$$30, &__$true);
		zephir_check_call_status();
		ZEPHIR_CALL_FUNCTION(&hash$$30, "base64_encode", NULL, 5, &_43$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(hash$$30);
		ZEPHIR_INIT_VAR(&_44$$30);
		ZEPHIR_CHECK_POINTER(dec);
		zephir_array_fetch_long(&_45$$30, &dec, 2, PH_NOISY | PH_READONLY, "psi/jwt.zep", 248 TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_46$$30, "base64_decode", NULL, 9, &_45$$30);
		zephir_check_call_status();
		ZEPHIR_CHECK_POINTER(hash$$30);
		if (!(zephir_hash_equals(&hash$$30, &_46$$30))) {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "signature verification failed!", "psi/jwt.zep", 249);
			return;
		} else {
			res = 1;
		}
	}
	RETURN_MM_BOOL(res);

}

