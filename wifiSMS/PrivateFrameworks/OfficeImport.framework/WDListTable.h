/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument;



@interface WDListTable : NSObject 
{
    NSMutableArray *mLists;
    WDDocument *mDocument;
}


- (id)document;
- (NSInteger)listCount;
- (id)listAt:(NSInteger)arg1;
- (id)lists;
- (id)addList:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;

@end
