/* Generated by RuntimeBrowser.
 */

@protocol WFForecastRequestFormatter <NSObject>

@required

+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDate *)arg4;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 withUnits:(int)arg3 locale:(NSLocale *)arg4 date:(NSDate *)arg5 rules:(WFRequestFormattingRules *)arg6;
+ (NSURL *)hostURLForService;

@end
