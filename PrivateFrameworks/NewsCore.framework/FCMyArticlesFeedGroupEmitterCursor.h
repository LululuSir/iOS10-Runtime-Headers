/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesFeedGroupEmitterCursor : NSObject <NSCoding, NSCopying> {
    NSArray * _deflatedRemainingGroups;
    bool  _finished;
    NSArray * _remainingGroups;
}

@property (nonatomic, copy) NSArray *deflatedRemainingGroups;
@property (nonatomic) bool finished;
@property (nonatomic, readonly) long long nextFeedGroupType;
@property (nonatomic, copy) NSArray *remainingGroups;

+ (id)finishedCursor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cursorByRemovingNextGroup;
- (id)deflatedRemainingGroups;
- (void)encodeWithCoder:(id)arg1;
- (bool)finished;
- (id)initWithCoder:(id)arg1;
- (long long)nextFeedGroupType;
- (id)remainingGroups;
- (void)setDeflatedRemainingGroups:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setRemainingGroups:(id)arg1;

@end
