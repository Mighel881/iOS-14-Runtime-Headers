/* Generated by RuntimeBrowser.
 */

@protocol TSPComponentParserDelegate <NSObject>

@required

- (bool)componentParser:(TSPComponentParser *)arg1 didReadArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::MessageInfo> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned long long x6; bool x7; }*)arg2 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg3 error:(id*)arg4;

@end