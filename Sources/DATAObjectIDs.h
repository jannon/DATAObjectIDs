@import CoreData;

FOUNDATION_EXPORT double DATAObjectIDsVersionNumber;
FOUNDATION_EXPORT const unsigned char DATAObjectIDsVersionString[];

@interface DATAObjectIDs : NSObject

+ (NSDictionary *)objectIDsInEntityNamed:(NSString *)entityName
                     withAttributesNamed:(NSString *)attributeName
                                 context:(NSManagedObjectContext *)context;

+ (NSDictionary *)objectIDsInEntityNamed:(NSString *)entityName
                     withAttributesNamed:(NSString *)attributeName
                                 context:(NSManagedObjectContext *)context
                               predicate:(NSPredicate *)predicate;

+ (NSArray *)objectIDsInEntityNamed:(NSString *)entityName
                            context:(NSManagedObjectContext *)context;

+ (NSArray *)objectIDsInEntityNamed:(NSString *)entityName
                            context:(NSManagedObjectContext *)context
                          predicate:(NSPredicate *)predicate;

@end
