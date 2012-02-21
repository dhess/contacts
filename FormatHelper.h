//
//  FormatHelper.h
//  contacts
//
//  Created by Shane Celis on Fri Jan 10 2003.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

BOOL isNullString(NSString* string);

id getValueForLabel(ABPerson *person,
	                    NSString *property,
	                    NSString *label);

NSString *getStringForLabel(ABPerson *person,
	                           NSString *property,
	                           NSString *label);

NSString *getDateForLabel(ABPerson *person,
                               NSString *property,
                               NSString *label);

NSArray *getFormatHelpers(NSString *format);

@interface FormatHelper : NSObject {
@protected
    NSString *literalValue;
    NSString *token;
}
- (id) initWithFormatToken: (NSString *) atoken;

- (id) initWithStringLiteral: (NSString *) literal;
    
- (char) type;

- (char) subtype;

- (int) fieldSize;

- (NSString *) printfToken;

- (NSString *) headerName;

- (NSString *) valueForPerson: (ABPerson *) person;

- (NSString *) valueForPerson: (ABPerson *) person withToken: (NSString *) aToken;
- (NSString *) valueForPerson: (ABPerson *) person withTokenPref: (NSArray *) tokens;

- (NSString *) addressForPerson: (ABPerson *) person withLabel: (NSString *) label;
                                                                             
- (NSString *) getNameString: (ABPerson *) person;

@end
