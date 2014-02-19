//
//  Created by Patrick Hogan on 10/12/12.
//


////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - Super class
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#import "BDCryptor.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - Public Interface
////////////////////////////////////////////////////////////////////////////////////////////////////////////
@interface BDSHA512Cryptor : BDCryptor

- (NSString *)SHA512Hash:(NSString *)inputString
                   error:(BDError *)error;

@end
