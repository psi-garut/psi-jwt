Simple JSON Web Token as PHP7's extension
=========================================

This is my initial upload for this project.

it has decent supports for RSA and HMACSHA algorithms and hash-generators.

```zephir
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
```

just compile the c source codes at ext directory and install it.
```shell
cd ext
phpize
./configure
make && sudo make install
```

change your php.ini to load the newly extension into your php7 installation.
```ini
extension=psi
```

this is simple raw sample of usage with Phalcon extension.
```php
public function jwtAction()
{
    $this->view->disable();
    /*
    $h = array(
        "alg" => "RMD160",
        "typ" => "JWT",
        "cty" => "cty",
        "kid" => "passkey",
    );

    $p = array(
        "iss" => "JWT",
        "sub" => "typ",
        "aud" => "cty",
        "exp" => "1578595132",
        "nbf" => "1547059132",
        "iat" => "1547059132",
        "jti" => "jti",
    );
    */
    if ($this->request->isSecure()) {
        if ($this->request->hasHeader('Authorization')) {
            $auth0 = explode(" ", $this->request->getHeader('Authorization'));
            /*
            $this->print_dbg($auth0);

            $t = Psi\Jwt::sign($this->cfg, (object) $h, (object) $p);
             */
            if (Psi\Jwt::verify($this->cfg, $auth0[1])) {
                $d = Psi\Jwt::decode($auth0[1]);
                $this->print_dbg(json_encode($d, JSON_PRETTY_PRINT));
            }
        }
    }
}
```

to check how fast it serve you...
```shell
public function testAction()
{
    $this->view->disable();
    $curl = curl_init();

    curl_setopt_array($curl, array(
        CURLOPT_CAINFO => ".../rootCA.pem",
        CURLOPT_CAPATH => ".../localhost-ssl-certs",
        CURLOPT_SSLCERT => ".../localhost-ssl-certs/bima.crt",
        CURLOPT_SSLKEY => ".../localhost-ssl-certs/bima.key",
        CURLOPT_KEYPASSWD => "server",
        CURLOPT_URL => "https://psi.fyi/index/jwt",
        CURLOPT_RETURNTRANSFER => true,
        CURLOPT_ENCODING => "utf-8",
        CURLOPT_MAXREDIRS => 10,
        CURLOPT_TIMEOUT => 30,
        CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
        CURLOPT_CUSTOMREQUEST => "GET",
        CURLOPT_HTTPHEADER => array(
            "Authorization: Bearer eyJhbGciOiJSUzUxMiIsImN0eSI6InBsYWluXC90ZXh0Iiwia2lkIjoiMjAxOS0wMS0xMCIsInR5cCI6IkpXVCJ9.eyJleHAiOjE1Nzg1OTUxMzIsImlhdCI6MTU0NzA1OTEzMiwiaXNzIjoicHNpLmZ5aSIsImp0aSI6IjIwMTktMDEtMTA6MDEtMzgtNTIiLCJuYmYiOjE1NDcwNTkxMzIsInNlYyI6ImMyVnlkbVZ5Iiwic3ViIjoiSGVsbG8gdGhpcyBpcyBKV1QhISEiLCJ1c3IiOiJkZWVjb29saXN0QGdtYWlsLmNvbSJ9.j9QWRtDKQSEOX9l8HrZ0Fblb_s0CwLNSgYNxcnnTdDOZUFl_PKHk1YmlC6dLYvagQAzO2JoDzyeXp9zzz7HH5p3zvKq8TtuzTEIjLTS9jLAQQ-WJEkVeFccwDpc-HSgDuamrdVyMC7Sp-asJAMA4YkDMhLlkF-i1RU3OFaQUS27cykC8EDAzLe9furgGkdmkFODO3T-IaCFODVJEubven6_0RwFWVWT4GwIsxyJJ5JneuTKhi3H3Wm47JlO3BXNQkdvCH2yukDE-xVFpZ0Ox_u92HIsXVrLn0rycIoC91PnKbIpgoL3LQYXm3GXWePM3KzYwwihyJc5i4QzACeIH1Q",
            "Cache-Control: no-cache"
        ),
    ));

    $response = curl_exec($curl);
    $err = curl_error($curl);

    curl_close($curl);

    if ($err) {
        echo "cURL Error #:" . $err;
    } else {
        echo $response;
    }
    echo "\n<br>\n<a href='testo'>testo</a>";
}
```
or you could test it with Postman application...

Thanks for now :-D
Bye
