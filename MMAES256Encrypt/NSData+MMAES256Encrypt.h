//
//  NSData+MMAES256Encrypt.h
//  xx
//
//  Created by MasashiMizuno on 2015/10/27.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonHMAC.h>


@interface NSData (MMAES256Encrypt)

- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;

@end
