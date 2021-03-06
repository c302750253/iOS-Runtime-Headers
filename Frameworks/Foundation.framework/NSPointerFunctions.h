/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSPointerFunctions : NSObject <NSCopying> {
}

@property int (* acquireFunction;
@property int (* descriptionFunction;
@property int (* hashFunction;
@property int (* isEqualFunction;
@property int (* relinquishFunction;
@property int (* sizeFunction;
@property bool usesStrongWriteBarrier;
@property bool usesWeakReadAndWriteBarriers;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;

- (int (*)())acquireFunction;
- (int (*)())descriptionFunction;
- (int (*)())hashFunction;
- (int (*)())isEqualFunction;
- (int (*)())relinquishFunction;
- (int (*)())sizeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)setAcquireFunction:(int (*)())arg1;
- (void)setDescriptionFunction:(int (*)())arg1;
- (void)setHashFunction:(int (*)())arg1;
- (void)setIsEqualFunction:(int (*)())arg1;
- (void)setRelinquishFunction:(int (*)())arg1;
- (void)setSizeFunction:(int (*)())arg1;
- (void)setUsesStrongWriteBarrier:(bool)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(bool)arg1;
- (bool)usesStrongWriteBarrier;
- (bool)usesWeakReadAndWriteBarriers;

@end
