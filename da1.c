#include <openssl/des.h>
#include <openssl/aes.h>
#include <openssl/rsa.h>
#include <openssl/dh.h>
#include <openssl/md5.h>
#include <openssl/sha.h>
#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 16  // Assuming input size of 16 bytes for simplicity

int main() {
    // DES Cipher
    unsigned char input[INPUT_SIZE] = "0123456789abcdef";
    unsigned char key[8] = "secretkey";
    unsigned char output[INPUT_SIZE];

    printf("DES Cipher:\n");
    printf("Input: %s\n", input);
    DES_ecb_encrypt(input, output, &key, DES_ENCRYPT);
    printf("Encrypted: ");
    for (int i = 0; i < INPUT_SIZE; i++) {
        printf("%02X", output[i]);
    }
    printf("\n");

    // AES Cipher
    unsigned char aes_key[16] = "0123456789abcdef";
    AES_KEY aes_enc_key;
    AES_set_encrypt_key(aes_key, 128, &aes_enc_key);
    AES_encrypt(input, output, &aes_enc_key);

    printf("\nAES Cipher:\n");
    printf("Input: %s\n", input);
    printf("Encrypted: ");
    for (int i = 0; i < INPUT_SIZE; i++) {
        printf("%02X", output[i]);
    }
    printf("\n");

    // RSA Cipher
    RSA *rsa = RSA_generate_key(2048, RSA_F4, NULL, NULL);
    unsigned char rsa_input[] = "Hello, RSA!";
    unsigned char rsa_output[RSA_size(rsa)];
    int rsa_output_len;

    printf("\nRSA Cipher:\n");
    printf("Input: %s\n", rsa_input);
    RSA_public_encrypt(strlen((char*)rsa_input), rsa_input, rsa_output, rsa, RSA_PKCS1_PADDING);
    rsa_output_len = RSA_size(rsa);
    printf("Encrypted: ");
    for (int i = 0; i < rsa_output_len; i++) {
        printf("%02X", rsa_output[i]);
    }
    printf("\n");
    RSA_free(rsa);

    // Diffie-Hellman Key Exchange
    DH *dh = DH_new();
    BIGNUM *p = BN_new(), *g = BN_new();
    BN_set_word(g, 2);  // Generator value
    BN_set_word(p, 23); // Prime value
    DH_set_params(dh, p, g);

    BIGNUM *priv_key_a = BN_new(), *priv_key_b = BN_new();
    DH_generate_key(dh, priv_key_a);
    DH_generate_key(dh, priv_key_b);

    BIGNUM *pub_key_a = BN_new(), *pub_key_b = BN_new();
    DH_compute_key(pub_key_a, priv_key_b, dh);
    DH_compute_key(pub_key_b, priv_key_a, dh);

    printf("\nDiffie-Hellman Key Exchange:\n");
    printf("Shared Key (Alice): ");
    BN_print_fp(stdout, pub_key_a);
    printf("\nShared Key (Bob): ");
    BN_print_fp(stdout, pub_key_b);
    printf("\n");

    BN_free(p);
    BN_free(g);
    BN_free(priv_key_a);
    BN_free(priv_key_b);
    BN_free(pub_key_a);
    BN_free(pub_key_b);
    DH_free(dh);

    // MD5
    unsigned char md5_input[] = "Hello, MD5!";
    unsigned char md5_output[MD5_DIGEST_LENGTH];

    printf("\nMD5:\n");
    printf("Input: %s\n", md5_input);
    MD5(md5_input, strlen((char*)md5_input), md5_output);
    printf("Hash: ");
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02X", md5_output[i]);
    }
    printf("\n");

    // SHA512
    unsigned char sha512_input[] = "Hello, SHA512!";
    unsigned char sha512_output[SHA512_DIGEST_LENGTH];

    printf("\nSHA512:\n");
    printf("Input: %s\n", sha512_input);
    SHA512(sha512_input, strlen((char*)sha512_input), sha512_output);
    printf("Hash: ");
    for (int i = 0; i < SHA512_DIGEST_LENGTH; i++) {
        printf("%02X", sha512_output[i]);
    }
    printf("\n");

    return 0;
}