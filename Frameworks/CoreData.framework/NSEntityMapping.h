/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData, NSDictionary, NSExpression, NSMutableArray, NSString;

@interface NSEntityMapping : NSObject {
    struct __entityMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedEntityMapping : 31; 
    NSMutableArray *_attributeMappings;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    } _entityMappingFlags;
    NSString *_entityMigrationPolicyClassName;
    unsigned int _mappingType;
    NSDictionary *_mappingsByName;
    NSString *_name;
    NSMutableArray *_relationshipMappings;
    void *_reserved1;
    void *_reserved;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
}

+ (void)initialize;

- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (id)_mappingsByName;
- (id)_migrationPolicy;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (id)attributeMappings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationEntityName;
- (id)destinationEntityVersionHash;
- (void)encodeWithCoder:(id)arg1;
- (id)entityMigrationPolicyClassName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)mappingType;
- (id)name;
- (id)relationshipMappings;
- (void)setAttributeMappings:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setDestinationEntityVersionHash:(id)arg1;
- (void)setEntityMigrationPolicyClassName:(id)arg1;
- (void)setMappingType:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setRelationshipMappings:(id)arg1;
- (void)setSourceEntityName:(id)arg1;
- (void)setSourceEntityVersionHash:(id)arg1;
- (void)setSourceExpression:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sourceEntityName;
- (id)sourceEntityVersionHash;
- (id)sourceExpression;
- (id)userInfo;

@end
