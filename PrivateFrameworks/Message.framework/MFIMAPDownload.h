/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFBaseFilterDataConsumer, MFCountingDataConsumer, NSMutableArray;

@interface MFIMAPDownload : NSObject {
    MFCountingDataConsumer *_countingConsumer;
    MFBaseFilterDataConsumer *_mainConsumer;
    NSMutableArray *_pendingFetchResults;
    unsigned int _uid;
}

@property(readonly) MFBaseFilterDataConsumer * mainConsumer;

- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (unsigned long long)bytesFetched;
- (unsigned long long)consumerBytesFetched;
- (id)data;
- (void)dealloc;
- (id)error;
- (unsigned long long)expectedLength;
- (void)handleFetchResult:(id)arg1;
- (id)initWithUid:(unsigned int)arg1;
- (bool)isComplete;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)mainConsumer;
- (void)processResults;
- (void)setError:(id)arg1;
- (unsigned int)uid;

@end