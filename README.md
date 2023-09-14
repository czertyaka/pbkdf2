# pbkdf2

Derive key with PKCS5 PBKDF2 HMAC function and automatically generated salt. Makes use of SHA-512 function. Output is given as JSON-string with hash and salt as hex-strings.

## build

With `conan>=2` and `cmake>=3.19`:

```console
$ conan install conanfile.txt --build=missing
$ cmake --preset conan-release
$ cmake --build build/Release
```

## examples

```console
$ ./build/Release/pbkdf2 -p "password"
{"hash":"4a9eb4875ac48d613fecd07440ff6d596832f2e19a1c29a9c74396a4e2a2d3e73c71f3a1d3055d5e882c728f637b6eaf376aad976f9192ab2f0e9a244340b3d8","salt":"827846313624ca4d86bad2a707941ad5bc91f16117beea3ce43a980ab342376b35092e92fb49f237dbe0b1d9aa6300ab64c1a410ba072618ee5fc46e4ff7b4d7"}
```

```console
$ ./build/Release/pbkdf2 -p "password" -i 100 -s 32 -k 128
{"hash":"71afbf8e8c57c352e0a0c99f644ce40c0a74922bdbae99605ae338d31fa18b6629fb17581f8d89369a0c4b429f50eeeb9421f5b79f640e3c9a492444b98f976c00f235ad2ec3f904cf38445fcd318f5d333d3a0a4686e8559088cc2e0257c02ac09f296557d58b38596e2b07974ed8a3967335746dbd7e9d7d3f9562c33e9bf7","salt":"46320fdbb82740f49a664dbbd2b48a0e084db28c27e926b90fb661fc5534d431"}
```

```console
$ ./build/Release/pbkdf2 --help
Usage: pbkdf2 [OPTIONS]
Derive key with PKCS5 PBKDF2 HMAC function and automatically generated salt.Makes use of SHA-512 function.
Output is given as JSON-string with hash and salt as hex-strings.

Allowed options:
  -h [ --help ]               produce help message
  -p [ --password ] arg       password to be encoded
  -i [ --iter ] arg (=10)     iterations number
  -s [ --saltsize ] arg (=64) salt size, bytes
  -k [ --keysize ] arg (=64)  key size, bytes

```
