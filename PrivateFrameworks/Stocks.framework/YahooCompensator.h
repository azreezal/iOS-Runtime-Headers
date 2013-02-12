/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSLock, NSMutableArray, Stock, SymbolValidator;

@interface YahooCompensator : NSObject {
    BOOL _compensatedForAllStocks;
    Stock *_currentStock;
    NSMutableArray *_stockQueue;
    NSLock *_stockQueueLock;
    SymbolValidator *_validator;
}

+ (BOOL)compensationRequired;
+ (id)sharedCompensator;

- (void)_compensateForNextStock;
- (void)compensateForAllStocks;
- (void)compensateForStock:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reset;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;

@end
