namespace Psi;

class Jwt
{

    private function __construct()
    {
    }

    public static function sign(var configs, var headers, var payloads) -> var
    {
        var res, key,
            exception,
            val, data,
            hash_generator,
            public_key_bio,
            private_key_bio,
            signature,
            segments,
            hmacsha,
            sig;
            
        try {
            if !empty(configs["public_key"]) {
                if !empty(configs["public_key_pass"]) {
                    let public_key_bio = openssl_get_publickey(configs["public_key"], configs["public_key_pass"]);
                } else {
                    let public_key_bio = openssl_get_publickey(configs["public_key"]);
                }
            } else {
                throw new \Exception(openssl_error_string());
            }
            if !empty(configs["private_key"]) {
                if !empty(configs["private_key_pass"]) {
                    let private_key_bio = openssl_get_privatekey(configs["private_key"], configs["private_key_pass"]);
                } else {
                    let private_key_bio = openssl_get_privatekey(configs["private_key"]);
                }
            } else {
                throw new \Exception(openssl_error_string());
            }
        } catch \Exception, exception {
            echo exception->getMessage();
        }

        if headers->alg === "MD4" {
            let hash_generator = OPENSSL_ALGO_MD4;
        }

        if headers->alg === "MD5" {
            let hash_generator = OPENSSL_ALGO_MD5;
        }

        if headers->alg === "RS1" {
            let hash_generator = OPENSSL_ALGO_SHA1;
        }

        if headers->alg === "RMD160" {
            let hash_generator = OPENSSL_ALGO_RMD160;
        }

        if headers->alg === "RS224" {
            let hash_generator = OPENSSL_ALGO_SHA224;
        }

        if headers->alg === "RS256" {
            let hash_generator = OPENSSL_ALGO_SHA256;
        }

        if headers->alg === "RS384" {
            let hash_generator = OPENSSL_ALGO_SHA384;
        }

        if headers->alg === "RS512" {
            let hash_generator = OPENSSL_ALGO_SHA512;
        }

        if headers->alg === "HS224" {
            let hash_generator = "sha224";
        }

        if headers->alg === "HS256" {
            let hash_generator = "sha256";
        }

        if headers->alg === "HS384" {
            let hash_generator = "sha384";
        }

        if headers->alg === "HS512" {
            let hash_generator = "sha512";
        }

        if headers->alg === "HS512/224" {
            let hash_generator = "sha512/224";
        }

        if headers->alg === "HS512/256" {
            let hash_generator = "sha512/256";
        }

        let segments = [];
        let segments[] = str_replace("=", "", strtr(base64_encode(json_encode(headers)), "+/", "-_"));
        let segments[] = str_replace("=", "", strtr(base64_encode(json_encode(payloads)), "+/", "-_"));
        let data = implode(".", segments);

        let hmacsha = ["HS224", "HS256", "HS384", "HS512", "HS512/224", "HS512/256"];

        if !in_array(headers->alg, hmacsha) {
            let signature = null;
            if openssl_sign(data, signature, private_key_bio, hash_generator) {
                let res = data . "." . str_replace("=", "", strtr(base64_encode(signature), "+/", "-_"));
            } else {
                throw new \Exception(openssl_error_string());
            }
        } else {
            let signature = base64_encode(hash_hmac(hash_generator, data, headers->kid, true));
            if !empty(signature) {
                let res = data . "." . str_replace("=", "", strtr(base64_encode(signature), "+/", "-_"));
            } else {
                throw new \Exception("signature generation failed!");
            }
        }

        return res;
    }

    public static function decode(var token) -> var
    {
        var res, seg, dec;
        let seg = explode(".", token);
        let dec = [];
        let dec[] = json_decode(base64_decode(strtr(seg[0], "-_", "+/")));
        let dec[] = json_decode(base64_decode(strtr(seg[1], "-_", "+/")));
        let dec[] = strtr(seg[2], "-_", "+/") . "==";

        return dec;
    }

    public static function verify(var configs, var token) -> boolean
    {
        var data, dec, segs_t,
            res, exception, headers,
            hash_generator,
            hmacsha,
            private_key_bio,
            public_key_bio;

        try {
            if !empty(configs["public_key"]) {
                if !empty(configs["public_key_pass"]) {
                    let public_key_bio = openssl_get_publickey(configs["public_key"], configs["public_key_pass"]);
                } else {
                    let public_key_bio = openssl_get_publickey(configs["public_key"]);
                }
            } else {
                throw new \Exception(openssl_error_string());
            }

            if !empty(configs["private_key"]) {
                if !empty(configs["private_key_pass"]) {
                    let private_key_bio = openssl_get_privatekey(configs["private_key"], configs["private_key_pass"]);
                } else {
                    let private_key_bio = openssl_get_privatekey(configs["private_key"]);
                }
            } else {
                throw new \Exception(openssl_error_string());
            }
        } catch \Exception, exception {
            echo exception->getMessage();
        }

        let segs_t = explode(".", token);
        let dec = self::decode(token);
        let headers = dec[0];
        let res = false;

        if headers->alg === "MD4" {
            let hash_generator = OPENSSL_ALGO_MD4;
        }

        if headers->alg === "MD5" {
            let hash_generator = OPENSSL_ALGO_MD5;
        }

        if headers->alg === "RS1" {
            let hash_generator = OPENSSL_ALGO_SHA1;
        }

        if headers->alg === "RMD160" {
            let hash_generator = OPENSSL_ALGO_RMD160;
        }

        if headers->alg === "RS224" {
            let hash_generator = OPENSSL_ALGO_SHA224;
        }

        if headers->alg === "RS256" {
            let hash_generator = OPENSSL_ALGO_SHA256;
        }

        if headers->alg === "RS384" {
            let hash_generator = OPENSSL_ALGO_SHA384;
        }

        if headers->alg === "RS512" {
            let hash_generator = OPENSSL_ALGO_SHA512;
        }

        if headers->alg === "HS224" {
            let hash_generator = "sha224";
        }

        if headers->alg === "HS256" {
            let hash_generator = "sha256";
        }

        if headers->alg === "HS384" {
            let hash_generator = "sha384";
        }

        if headers->alg === "HS512" {
            let hash_generator = "sha512";
        }

        if headers->alg === "HS512/224" {
            let hash_generator = "sha512/224";
        }

        if headers->alg === "HS512/256" {
            let hash_generator = "sha512/256";
        }

        let data = strtr(segs_t[0], "-_", "+/").".".strtr(segs_t[1], "-_", "+/");


        let hmacsha = ["HS224", "HS256", "HS384", "HS512", "HS512/224", "HS512/256"];

        if !in_array(headers->alg, hmacsha) {
            if openssl_verify(data, base64_decode(dec[2]), public_key_bio, hash_generator) {
                let res = true;
            } else {
                throw new \Exception(openssl_error_string());
            }
        } else {
            var hash;
            let hash = base64_encode(hash_hmac(hash_generator, data, headers->kid, true));
            if !hash_equals(hash, base64_decode(dec[2])) {
                throw new \Exception("signature verification failed!");
            } else {
                let res = true;
            }
        }

        return res;
    }
}
